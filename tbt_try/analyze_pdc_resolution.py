import uproot
import numpy as np
import matplotlib.pyplot as plt
from scipy.odr import ODR, Model, RealData
from scipy.signal import lombscargle

def analyze_with_odr(inrootfile="./output/data0077.ridf_pdc_tdc_tot.root"):
    """
    使用Python和正交距离回归(ODR)分析周期性的PDC数据。
    该方法首先使用Lomb-Scargle周期图精确确定周期，然后将数据折叠(叠加)，
    最后进行ODR拟合，以分离并计算x(U)和y(mintdc_forU)方向的固有误差。
    """
    print(f"--- 正在使用 uproot 打开文件: {inrootfile} ---")
    try:
        with uproot.open(inrootfile) as f_in:
            tin = f_in["pdc_tdc"]
            data = tin.arrays(["U", "mintdc_forU"], library="np")
            u_raw, tdc_raw = data["U"], data["mintdc_forU"]
    except Exception as e:
        print(f"错误: 无法读取ROOT文件或文件中的TTree。 {e}")
        return

    mask = (u_raw > -999) & (tdc_raw > 0) & (u_raw >= -200.0) & (u_raw <= -50.0) & (tdc_raw < 5800) & (tdc_raw > 4500)
    u_data, tdc_data = u_raw[mask], tdc_raw[mask]
    print(f"数据加载并过滤完成，保留 U ∈ [-200,00] mm，共 {len(u_data)} 个有效数据点。")


    # --- 步骤 1: 使用Lomb-Scargle周期图精确计算周期 ---
    print("\n--- 步骤 1: 使用Lomb-Scargle周期图精确计算周期... ---")
    
    min_period, max_period = 12, 18
    print(f"根据先验知识，将周期扫描范围聚焦在 [{min_period}, {max_period}] mm")
    
    frequencies = np.linspace(1/max_period, 1/min_period, 10000)
    angular_frequencies = 2 * np.pi * frequencies
    power = lombscargle(u_data, tdc_data, angular_frequencies, normalize=True)
    best_angular_frequency = angular_frequencies[np.argmax(power)]
    best_frequency = best_angular_frequency / (2 * np.pi)
    lomb_scargle_period = 1.0 / best_frequency
    
    print(f"Lomb-Scargle分析完成。最强信号频率为 {best_frequency:.4f} mm^-1")
    print(f" -> 对应的精确周期 T = {lomb_scargle_period:.4f} mm")

    plt.figure(figsize=(10, 6))
    plt.plot(1/frequencies, power)
    plt.xlabel("Period [mm]"), plt.ylabel("Lomb-Scargle Power"), plt.title("Lomb-Scargle Periodogram")
    plt.axvline(lomb_scargle_period, color='r', linestyle='--', label=f'Peak Period = {lomb_scargle_period:.2f} mm')
    plt.legend(), plt.grid(True), plt.savefig("lomb_scargle_periodogram.png", dpi=300)
    print("Lomb-Scargle周期图已保存为 lomb_scargle_periodogram.png")
    plt.close()

    # --- 步骤 2: 使用模运算进行数据折叠 (叠加) ---
    print("\n--- 步骤 2: 正在将所有周期的数据折叠(叠加)到中心，并对齐谷底... ---")

    # 首先进行初步折叠到 [0, period) 范围
    u_temp_folded = u_data % lomb_scargle_period

    # 方法1: 选择TDC最小的1%数据点，对其U坐标进行高斯拟合找谷底
    print("正在使用TDC最小1%数据的高斯拟合方法寻找谷底...")
    tdc_1_percentile = np.percentile(tdc_data, 1)
    lowest_tdc_mask = tdc_data <= tdc_1_percentile
    u_lowest = u_temp_folded[lowest_tdc_mask]
    tdc_lowest = tdc_data[lowest_tdc_mask]

    print(f"选中了 {len(u_lowest)} 个最低TDC数据点 (TDC <= {tdc_1_percentile:.2f})")

    # 对最低TDC数据点的U坐标做直方图统计，然后高斯拟合
    hist_counts, hist_edges = np.histogram(u_lowest, bins=50, density=True)
    hist_centers = (hist_edges[:-1] + hist_edges[1:]) / 2

    # 高斯拟合函数
    def gaussian(x, amplitude, mean, std):
        return amplitude * np.exp(-0.5 * ((x - mean) / std) ** 2)

    # 初始参数估计
    amplitude_guess = np.max(hist_counts)
    mean_guess = np.median(u_lowest)
    std_guess = np.std(u_lowest)

    try:
        from scipy.optimize import curve_fit
        popt, pcov = curve_fit(gaussian, hist_centers, hist_counts, 
                            p0=[amplitude_guess, mean_guess, std_guess])
        valley_position = popt[1]  # 高斯拟合的均值就是谷底位置
        valley_std = popt[2]
        
        print(f"高斯拟合成功:")
        print(f"  谷底位置: {valley_position:.4f} mm")
        print(f"  谷底宽度(σ): {valley_std:.4f} mm")
        
        # 可视化高斯拟合结果
        plt.figure(figsize=(10, 6))
        plt.hist(u_lowest, bins=50, density=True, alpha=0.7, color='skyblue', 
                label=f'TDC min 1% (N={len(u_lowest)})')
        u_fit = np.linspace(u_lowest.min(), u_lowest.max(), 200)
        plt.plot(u_fit, gaussian(u_fit, *popt), 'r-', linewidth=2, 
                label=f'gaussian: μ={valley_position:.3f}, σ={valley_std:.3f}')
        plt.axvline(valley_position, color='red', linestyle='--', alpha=0.8)
        plt.xlabel('U position [mm]')
        plt.ylabel('Probability density')
        plt.title('Gaussian Fit to Valley Position')
        plt.legend()
        plt.grid(True, alpha=0.3)
        plt.savefig("valley_gaussian_fit.png", dpi=300)
        print("谷底高斯拟合图已保存为 valley_gaussian_fit.png")
        plt.close()
        
    except Exception as e:
        print(f"高斯拟合失败，使用中位数作为谷底位置: {e}")
        valley_position = np.median(u_lowest)

    
    # 应用相位偏移，将valley_position移动到零处
    u_folded = ((u_data - valley_position + lomb_scargle_period / 2.0) % lomb_scargle_period) - lomb_scargle_period / 2.0


    print("数据折叠完成，谷底已精确对齐到零处。")

    # --- 步骤 3: 为ODR准备初始参数 ---
    print("\n--- 步骤 3: 正在为ODR准备初始参数... ---")
    
    # 【*** 关键修复 ***】: 
    # 选取TDC值最低的1%的数据点

    lowest_tdc_percentile = np.percentile(tdc_data, 1)
    lowest_tdc_mask = tdc_data <= lowest_tdc_percentile
    u_lowest = u_folded[lowest_tdc_mask]
    tdc_lowest = tdc_data[lowest_tdc_mask]

    offset_y_guess = 4800
    center_x = valley_position

    slope_guess = 30

    initial_params = [offset_y_guess, np.abs(slope_guess)]
    print("初步估计的参数:")
    print(f"  V形谷底 (y0) ≈ {initial_params[0]:.2f}")
    print(f"  斜率 (slope)   ≈ {initial_params[1]:.2f}")



    # --- 步骤 4: 定义并运行ODR ---
    def v_shape_model(params, x):
        offset_y, slope = params
        # return offset_y + slope * np.abs(x ) 
        return offset_y + slope * np.abs(x)  # 考虑谷底宽度的V形模型

    print("\n--- 步骤 4: 正在对折叠后的高统计数据进行ODR拟合... ---")
    fit_mask = (u_folded >= -4) & (u_folded <= 4)
    u_folded_fit = u_folded[fit_mask]
    tdc_data_fit = tdc_data[fit_mask]
    
    # --- 归一化数据以改善ODR数值稳定性 ---
    print("归一化数据以改善ODR收敛性...")
    u_mean, u_std = np.mean(u_folded_fit), np.std(u_folded_fit)
    tdc_mean, tdc_std = np.mean(tdc_data_fit), np.std(tdc_data_fit)
    
    u_normalized = (u_folded_fit - u_mean) / u_std
    tdc_normalized = (tdc_data_fit - tdc_mean) / tdc_std
    
    print(f"归一化参数: u_mean={u_mean:.4f}, u_std={u_std:.4f}")
    print(f"归一化参数: tdc_mean={tdc_mean:.4f}, tdc_std={tdc_std:.4f}")
    
    # 调整初始参数到归一化空间
    offset_y_norm = (offset_y_guess - tdc_mean) / tdc_std
    slope_norm = slope_guess * u_std / tdc_std  # dy/dx -> (dy/tdc_std)/(dx/u_std)
    initial_params_norm = [offset_y_norm, np.abs(slope_norm)]
    
    print(f"归一化初始参数: offset_y_norm={offset_y_norm:.4f}, slope_norm={slope_norm:.4f}")
    
    data_obj = RealData(u_normalized, tdc_normalized)
    model_obj = Model(v_shape_model)
    odr_instance = ODR(data_obj, model_obj, beta0=initial_params_norm, maxit=20000)
    output = odr_instance.run()
    
    print("\nODR拟合完成。归一化空间的拟合参数:")
    output.pprint()
    
    # --- 反归一化参数到物理单位 ---
    print("\n反归一化参数到物理单位...")
    offset_y_physical = output.beta[0] * tdc_std + tdc_mean
    slope_physical = output.beta[1] * tdc_std / u_std  # (dy/tdc_std)/(dx/u_std) -> dy/dx
    
    print(f"反归一化后的物理参数:")
    print(f"  V形谷底 (y0) = {offset_y_physical:.4f} TDC counts")
    print(f"  斜率 (slope) = {slope_physical:.4f} TDC/mm")
    
    # 构造反归一化的参数向量用于绘图
    beta_physical = [offset_y_physical, slope_physical]

    # --- 步骤 5: 提取x和y方向的误差 ---
    print("\n--- 步骤 5: 正在从ODR结果中计算x和y的固有误差... ---")
    # 反归一化residuals到物理单位
    sigma_x_normalized = np.std(output.delta)
    sigma_y_normalized = np.std(output.eps)
    
    sigma_x = sigma_x_normalized * u_std  # 转换到mm单位
    sigma_y = sigma_y_normalized * tdc_std  # 转换到TDC单位
    
    print(f"归一化空间: sigma_x_norm={sigma_x_normalized:.4f}, sigma_y_norm={sigma_y_normalized:.4f}")
    print(f"拟合得到的斜率 (slope) = {slope_physical:.4f} TDC/mm")
    print(f"拟合得到的V形谷底 (y0) = {offset_y_physical:.4f} TDC counts")


    
    print("--------------------------------------------------------")
    print("最终分离出的固有误差:")
    print(f" -> 固有空间分辨率 (sigma_x) = {sigma_x:.4f} mm")
    print(f" -> 固有时间分辨率 (sigma_y) = {sigma_y:.4f} TDC counts")
    print("--------------------------------------------------------")

    # --- 步骤 6: 可视化结果 ---
    plt.style.use('seaborn-v0_8-whitegrid')
    fig, ax = plt.subplots(figsize=(10, 7))
    ax.hist2d(u_folded, tdc_data, bins=(200, 200), cmap='Blues', cmin=1, 
              range=((-lomb_scargle_period/2, lomb_scargle_period/2), 
                     (np.min(tdc_data), 5400)))
    u_fit_line = np.linspace(-lomb_scargle_period/2, lomb_scargle_period/2, 500)
    tdc_fit_line = v_shape_model(beta_physical, u_fit_line)
    ax.plot(u_fit_line, tdc_fit_line, 'r-', linewidth=2.5, label='ODR Fit Curve')
    
    ax.set_xlabel("Relative Position U (folded) [mm]", fontsize=14)
    ax.set_ylabel("Min TDC [counts]", fontsize=14)
    ax.set_title("Folded PDC Data with Orthogonal Distance Regression (ODR) Fit", fontsize=16)
    ax.legend(fontsize=12)
    result_text = (f"$\\sigma_x$ (spatial) = {sigma_x:.4f} mm\n"
                   f"$\\sigma_y$ (timing) = {sigma_y:.4f} TDC counts")
    ax.text(0.05, 0.95, result_text, transform=ax.transAxes, fontsize=12,
            verticalalignment='top', bbox=dict(boxstyle='round,pad=0.5', fc='wheat', alpha=0.5))
    
    plt.savefig("odr_fit_result_folded.png", dpi=300)
    print("\n分析图像已保存为 odr_fit_result_folded.png")
    plt.show()

if __name__ == '__main__':
    inrootfile = "./output/data0074.ridf_pdc_tdc_tot.root"
    analyze_with_odr(inrootfile)

