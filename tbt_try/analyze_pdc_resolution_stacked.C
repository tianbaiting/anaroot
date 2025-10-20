#include <TFile.h>
#include <TTree.h>
#include <TCanvas.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TF1.h>
#include <TStyle.h>
#include <TGraph.h>
#include <TGraphErrors.h>
#include <TSpectrum.h>
#include <numeric>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for std::sort
#include <cmath>     // for std::abs

// 最终版分析函数：同时分析时间和空间分辨率，并计算斜率
// 新增功能：通过叠加所有找到的峰来更精确地计算空间分辨率
void analyze_pdc_resolution_stacked(const char* inrootfile = "./output/data0077.ridf_pdc_tdc_tot.root") {
    
    // --- 步骤 0: 准备工作 ---
    gStyle->SetOptFit(1); 
    gStyle->SetOptStat(1111);

    TFile *f_in = TFile::Open(inrootfile, "READ");
    if(!f_in || f_in->IsZombie()){ printf("错误: 无法打开输入文件 %s\n", inrootfile); return; }

    TTree *tin = (TTree*)f_in->Get("pdc_tdc");
    if(!tin){ printf("错误: 在文件 %s 中找不到名为 pdc_tdc 的 TTree\n", inrootfile); f_in->Close(); return; }
    
    std::string out_res_filename = std::string(inrootfile) + "_resolution_stacked.root";
    TFile *f_out = new TFile(out_res_filename.c_str(), "RECREATE");

    // --- 步骤 1: 分析时间分辨率 sigma_t (U vs mintdc_forU) ---
    // (此部分代码与您提供的版本完全相同，保持不变)
    std::cout << "--- 开始分析时间分辨率 (sigma_t) ---" << std::endl;
    TH2F *h_U_mintdc = new TH2F("h_U_mintdc", "U vs mintdc_forU; U [mm]; mintdc_forU [counts]", 200, -200, 50, 400, 4600, 5300);
    double tree_U, tree_mintdc_forU;
    tin->SetBranchAddress("U", &tree_U);
    tin->SetBranchAddress("mintdc_forU", &tree_mintdc_forU);
    long long n_entries = tin->GetEntries();
    std::cout << "正在手动填充 U vs mintdc 直方图，共 " << n_entries << " 个事件..." << std::endl;
    for(long long i=0; i<n_entries; ++i){
        tin->GetEntry(i);
        if (tree_U > -999 && tree_mintdc_forU > 0) {
            h_U_mintdc->Fill(tree_U, tree_mintdc_forU);
        }
    }
    TCanvas *c_U_mintdc = new TCanvas("c_U_mintdc", "U vs mintdc_forU Distribution", 800, 600);
    h_U_mintdc->Draw("COLZ");
    c_U_mintdc->Update();

    TGraphErrors *gr_tres_vs_pos = new TGraphErrors();
    gr_tres_vs_pos->SetName("gr_tres_vs_pos");
    gr_tres_vs_pos->SetTitle("Timing Resolution vs. Position U; Position U [mm]; Timing Resolution #sigma_{t} [TDC counts]");
    TGraph *gr_mean_tdc_vs_pos = new TGraph();
    gr_mean_tdc_vs_pos->SetName("gr_mean_tdc_vs_pos");
    gr_mean_tdc_vs_pos->SetTitle("Mean TDC vs. Position U; Position U [mm]; Mean TDC [counts]");
    int point_index = 0;
    int num_bins_x = h_U_mintdc->GetNbinsX();
    for (int i_bin = 1; i_bin <= num_bins_x; ++i_bin) {
        TH1D* h_proj_tdc = h_U_mintdc->ProjectionY(Form("proj_tdc_bin%d", i_bin), i_bin, i_bin);
        if (h_proj_tdc->GetEntries() < 100) { delete h_proj_tdc; continue; }
        h_proj_tdc->Fit("gaus", "Q");
        TF1* fitFunc = h_proj_tdc->GetFunction("gaus");
        if (fitFunc) {
            double pos_U = h_U_mintdc->GetXaxis()->GetBinCenter(i_bin);
            double mean_tdc = fitFunc->GetParameter(1);
            double time_res = fitFunc->GetParameter(2);
            double err_time_res = fitFunc->GetParError(2);
            if (time_res > 0 && time_res < 100) {
                gr_tres_vs_pos->SetPoint(point_index, pos_U, time_res);
                gr_tres_vs_pos->SetPointError(point_index, 0, err_time_res);
                gr_mean_tdc_vs_pos->SetPoint(point_index, pos_U, mean_tdc);
                point_index++;
            }
        }
        delete h_proj_tdc;
    }
    std::cout << "时间分辨率分析完成，共获得 " << point_index << " 个有效数据点。" << std::endl;
    TCanvas *c_tres = new TCanvas("c_tres", "Timing Resolution vs Position", 800, 600);
    gr_tres_vs_pos->SetMarkerStyle(20);
    gr_tres_vs_pos->SetMarkerSize(0.8);
    gr_tres_vs_pos->Draw("AP");
    c_tres->Update();

    // --- 步骤 1.5: 【新增】计算斜率 d(TDC)/d(U) ---
    // (此部分代码与您提供的版本完全相同，保持不变)
    std::cout << "\n--- 开始计算斜率 d(TDC)/d(U) ---" << std::endl;
    TCanvas *c_slope = new TCanvas("c_slope", "Mean TDC vs Position for Slope Fit", 800, 600);
    gr_mean_tdc_vs_pos->SetMarkerStyle(20);
    gr_mean_tdc_vs_pos->SetMarkerSize(0.5);
    gr_mean_tdc_vs_pos->Draw("AP");
    TF1 *fit_slope_neg = new TF1("fit_slope_neg", "[0]*x + [1]", -106, -101);
    TF1 *fit_slope_pos = new TF1("fit_slope_pos", "[0]*x + [1]", -99, -94);
    fit_slope_neg->SetLineColor(kRed);
    fit_slope_pos->SetLineColor(kGreen);
    gr_mean_tdc_vs_pos->Fit(fit_slope_neg, "R+");
    gr_mean_tdc_vs_pos->Fit(fit_slope_pos, "R+");
    c_slope->Update();
    double neg_slope = fit_slope_neg->GetParameter(0);
    double neg_slope_err = fit_slope_neg->GetParError(0);
    double pos_slope = fit_slope_pos->GetParameter(0);
    double pos_slope_err = fit_slope_pos->GetParError(0);
    std::cout << "--------------------------------------------------------" << std::endl;
    printf("下降部分的斜率 (Negative Slope) = %.2f +/- %.2f TDC counts/mm\n", neg_slope, neg_slope_err);
    printf("上升部分的斜率 (Positive Slope) = %.2f +/- %.2f TDC counts/mm\n", pos_slope, pos_slope_err);
    std::cout << "--------------------------------------------------------" << std::endl;

    // --- 步骤 2: 分析空间分辨率 sigma_U (原始方法) ---
    std::cout << "\n--- 开始分析空间分辨率 (sigma_U) ---" << std::endl;
    TH1F *h_U_resolution = new TH1F("h_U_resolution", "U distribution at min TDC; U [mm]; Entries", 800, -200, -50);
    double tdc_min_cut = 4650;
    double tdc_max_cut = 4720;
    tin->Draw(Form("U >> h_U_resolution"), Form("mintdc_forU > %f && mintdc_forU < %f", tdc_min_cut, tdc_max_cut), "goff");
    TCanvas *c_sres_comb = new TCanvas("c_sres_comb", "Comb Distribution of U with Individual Fits", 1200, 600);
    h_U_resolution->Draw();
    TSpectrum *s = new TSpectrum();
    int nfound = s->Search(h_U_resolution, 0.5, "", 0.15);
    printf("找到了 %d 个峰。\n", nfound);
    double *xpeaks = s->GetPositionX();
    
    // --- 步骤 2.5: 计算峰值平均间距 (与您提供的版本相同) ---
    std::cout << "\n--- 开始计算峰值平均间距 ---" << std::endl;
    std::vector<double> peak_vec(xpeaks, xpeaks + nfound);
    std::sort(peak_vec.begin(), peak_vec.end());
    std::vector<double> spacings;
    for (size_t i = 1; i < peak_vec.size(); ++i) {
        spacings.push_back(peak_vec[i] - peak_vec[i-1]);
    }
    double sum_spacing = std::accumulate(spacings.begin(), spacings.end(), 0.0);
    double mean_spacing = (spacings.size() > 0) ? sum_spacing / spacings.size() : 0;
    double sum_sq_diff = 0;
    for(double sp : spacings) {
        sum_sq_diff += (sp - mean_spacing) * (sp - mean_spacing);
    }
    double std_dev_spacing = (spacings.size() > 1) ? std::sqrt(sum_sq_diff / (spacings.size() - 1)) : 0;
    std::cout << "--------------------------------------------------------" << std::endl;
    printf("峰值平均间距 (Average Peak Spacing) = %.4f +/- %.4f mm\n", mean_spacing, std_dev_spacing);
    std::cout << "--------------------------------------------------------" << std::endl;

    // --- 【新方法】步骤 2.6: 叠加所有峰并进行拟合 ---
    std::cout << "\n--- 【新方法】开始叠加所有峰以进行精确拟合 ---" << std::endl;

    // 创建一个新的直方图来存放叠加后的峰
    double stacked_range = 8.0; // 叠加后直方图的范围，例如 +/- 8 mm
    int nbins_stacked = static_cast<int>(2 * stacked_range / h_U_resolution->GetBinWidth(1));
    TH1F *h_U_stacked = new TH1F("h_U_stacked", "Stacked Peak Distribution; Relative Position U [mm]; Entries", nbins_stacked, -stacked_range, stacked_range);

    // 遍历原始直方图的每一个bin
    for (int i_bin = 1; i_bin <= h_U_resolution->GetNbinsX(); ++i_bin) {
        double bin_center = h_U_resolution->GetBinCenter(i_bin);
        double bin_content = h_U_resolution->GetBinContent(i_bin);
        if (bin_content <= 0) continue;

        // 找到距离当前bin最近的峰
        double min_dist = 1e9;
        double closest_peak_pos = 0;
        for (int i_peak = 0; i_peak < nfound; ++i_peak) {
            double dist = std::abs(bin_center - xpeaks[i_peak]);
            if (dist < min_dist) {
                min_dist = dist;
                closest_peak_pos = xpeaks[i_peak];
            }
        }

        // 计算相对位置并填充到新的直方图中
        double relative_pos = bin_center - closest_peak_pos;
        h_U_stacked->Fill(relative_pos, bin_content);
    }

    TCanvas *c_stacked = new TCanvas("c_stacked", "Stacked Peak Fit for Spatial Resolution", 800, 600);
    h_U_stacked->SetMarkerStyle(20);
    h_U_stacked->SetMarkerSize(0.8);
    h_U_stacked->Draw("E"); // "E"选项可以画出误差棒

    // 对叠加后的峰进行高斯拟合
    TF1 *fit_gaus_stacked = new TF1("fit_gaus_stacked", "gaus", -stacked_range, stacked_range);
    h_U_stacked->Fit(fit_gaus_stacked, "R");

    double stacked_res = fit_gaus_stacked->GetParameter(2); // Sigma
    double stacked_res_err = fit_gaus_stacked->GetParError(2);

    std::cout << "--------------------------------------------------------" << std::endl;
    printf("叠加拟合最终空间分辨率 (sigma_U_stacked) = %.4f +/- %.4f mm\n", std::abs(stacked_res), stacked_res_err);
    std::cout << "--------------------------------------------------------" << std::endl;
    
    c_stacked->Update();


    // --- 步骤 3: 保存所有结果 ---
    f_out->cd();
    // 保存原始分析的图
    h_U_mintdc->Write(); 
    c_tres->Write();
    gr_tres_vs_pos->Write();
    c_slope->Write();
    gr_mean_tdc_vs_pos->Write();
    c_sres_comb->Write(); // 原始的逐个拟合图也保存下来以供比较
    h_U_resolution->Write(); 
    
    // 保存【新方法】的结果
    c_stacked->Write();
    h_U_stacked->Write();

    f_out->Close();
    f_in->Close();

    std::cout << "\n分析完成！结果已保存至: " << out_res_filename << std::endl;
}
