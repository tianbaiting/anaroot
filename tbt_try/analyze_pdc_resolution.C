#include <TFile.h>
#include <TTree.h>
#include <TCanvas.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TF1.h>
#include <TStyle.h>
#include <TGraphErrors.h>
#include <iostream>
#include <string>
#include <sys/stat.h> // <-- FIX 1: Include this for mkdir
// 主分析函数
void analyze_pdc_resolution(const char* inrootfile = "./output/data0074.ridf_pdc_tdc_tot.root") {
    
    // --- 步骤 0: 准备工作 ---
    gStyle->SetOptFit(1111); // 在图中显示详细的拟合结果

    // 打开包含TTree的输入文件
    TFile *f_in = TFile::Open(inrootfile, "READ");
    if(!f_in || f_in->IsZombie()){
        printf("错误: 无法打开输入文件 %s\n", inrootfile);
        return;
    }

    TTree *tin = (TTree*)f_in->Get("pdc_tdc");
    if(!tin){
        printf("错误: 在文件 %s 中找不到名为 pdc_tdc 的 TTree\n", inrootfile);
        f_in->Close();
        return;
    }
    
    // 创建一个新的输出文件来保存分析结果（图像、图等）
    std::string out_res_filename = std::string(inrootfile) + "_resolution.root";
    TFile *f_out = new TFile(out_res_filename.c_str(), "RECREATE");


    // --- 步骤 1: 分析时间分辨率 sigma_t (U vs mintdc_forU) ---

    // 首先，将TTree数据画到一个TH2F中，方便后续的切片操作
    TH2F *h_U_mintdc = new TH2F("h_U_mintdc", "U vs mintdc_forU; U [mm]; mintdc_forU [counts]", 250, -200, 50, 200, 4600, 5300);
    tin->Draw("mintdc_forU:U >> h_U_mintdc", "", "COLZ");

    TCanvas *c_U_mintdc = new TCanvas("c_U_mintdc", "U vs mintdc_forU Distribution", 800, 600);
    h_U_mintdc->Draw("COLZ");

    // 创建一个TGraphErrors来存储分辨率随位置变化的结果
    TGraphErrors *gr_tres_vs_pos = new TGraphErrors();
    gr_tres_vs_pos->SetName("gr_tres_vs_pos");
    gr_tres_vs_pos->SetTitle("Timing Resolution vs. Position U; Position U [mm]; Timing Resolution #sigma_{t} [TDC counts]");

    int point_index = 0;
    int num_bins_x = h_U_mintdc->GetNbinsX();

    std::cout << "开始分析时间分辨率 (sigma_t)..." << std::endl;
    // 循环U轴的每一个bin来进行切片
    for (int i_bin = 1; i_bin <= num_bins_x; ++i_bin) {
        
        // 对当前U bin做Y轴投影，得到mintdc的一维分布
        TH1D* h_proj_tdc = h_U_mintdc->ProjectionY(Form("proj_tdc_bin%d", i_bin), i_bin, i_bin);

        // 如果这个切片里的数据点太少，就跳过
        if (h_proj_tdc->GetEntries() < 100) {
            delete h_proj_tdc;
            continue;
        }

        // 用高斯函数拟合
        h_proj_tdc->Fit("gaus", "Q"); // "Q" 表示静默模式，不在屏幕上输出拟合过程
        TF1* fitFunc = h_proj_tdc->GetFunction("gaus");

        if (fitFunc) {
            double pos_U = h_U_mintdc->GetXaxis()->GetBinCenter(i_bin);
            double time_res = fitFunc->GetParameter(2);     // 参数2是高斯函数的 sigma
            double err_time_res = fitFunc->GetParError(2);  // sigma的误差

            // 只保留有意义的拟合结果
            if (time_res > 0 && time_res < 100) { // 设定一个合理的范围
                gr_tres_vs_pos->SetPoint(point_index, pos_U, time_res);
                gr_tres_vs_pos->SetPointError(point_index, 0, err_time_res);
                point_index++;
            }
        }
        delete h_proj_tdc; // 清理内存
    }
    std::cout << "时间分辨率分析完成，共获得 " << point_index << " 个有效数据点。" << std::endl;

    // 绘制时间分辨率 vs. 位置的图像
    TCanvas *c_tres = new TCanvas("c_tres", "Timing Resolution vs Position", 800, 600);
    c_tres->cd();
    gr_tres_vs_pos->SetMarkerStyle(20);
    gr_tres_vs_pos->SetMarkerSize(0.8);
    gr_tres_vs_pos->Draw("AP"); // "AP"表示画出坐标轴和数据点


    // --- 步骤 2: 分析空间分辨率 sigma_U ---
    // 在mintdc最小的区域（V形谷底）对U进行投影
    
    std::cout << "开始分析空间分辨率 (sigma_U)..." << std::endl;
    TH1F *h_U_resolution = new TH1F("h_U_resolution", "U distribution at min TDC; U [mm]; Entries", 200, -200, 50);
    
    // 定义mintdc的最小值区域，这个范围需要您根据TH2F图进行微调
    double tdc_min_cut = 4650;
    double tdc_max_cut = 4750;
    
    // 从TTree中筛选出符合条件的事件并填充
    tin->Draw(Form("U >> h_U_resolution"), Form("mintdc_forU > %f && mintdc_forU < %f", tdc_min_cut, tdc_max_cut));

    // 拟合U的分布
    h_U_resolution->Fit("gaus", "R"); // "R" 表示在指定范围内拟合

    // 绘制拟合结果
    TCanvas *c_sres = new TCanvas("c_sres", "Spatial Resolution at min TDC", 800, 600);
    c_sres->cd();
    h_U_resolution->Draw();

    TF1* fit_sres = h_U_resolution->GetFunction("gaus");
    if(fit_sres){
        double spatial_res = fit_sres->GetParameter(2);
        double err_spatial_res = fit_sres->GetParError(2);
        std::cout << "--------------------------------------------------------" << std::endl;
        printf("估算的本征空间分辨率 (sigma_U) = %.3f +/- %.3f mm\n", spatial_res, err_spatial_res);
        std::cout << "--------------------------------------------------------" << std::endl;
    }


    // --- 步骤 3: 保存所有结果 ---
    f_out->cd(); // 切换到输出文件
    c_U_mintdc->Write();
    c_tres->Write();
    gr_tres_vs_pos->Write();
    c_sres->Write();
    h_U_resolution->Write();

    f_out->Close();
    f_in->Close();

    std::cout << "分析完成！结果已保存至: " << out_res_filename << std::endl;
}