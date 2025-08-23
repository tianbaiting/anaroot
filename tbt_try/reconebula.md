# NEBULA 重建流程与用法梳理

NEBULA 的重建主要涉及如下库和宏，下面梳理其流程和用法：

## 1. 相关库（类）

### 1.1 TArtCalibNEBULAHPC

- **头文件**：`TArtCalibNEBULAHPC.hh`
- **作用**：对 NEBULA HPC（高压计数器）探测器的原始数据进行 hit 级别的重建，输出为 `TArtNEBULAHPC` 对象。
- **常用接口**：
  - `void ReconstructData();` // 进行重建
  - `void ClearData();`    // 清空上次数据
  - `Int_t GetNumNEBULAHPC() const;` // 获取 hit 数
  - `TArtNEBULAHPC* GetNEBULAHPC(Int_t i) const;` // 获取第 i 个 hit

### 1.2 TArtRecoNeutron

- **头文件**：`TArtRecoNeutron.hh`
- **作用**：对 NEBULA 的 hit 进行物理重建，输出中子候选（neutron candidate），如飞行时间、能量等。
- **常用接口**：
  - `void ReconstructData();`
  - `void ClearData();`
  - `TClonesArray* GetNeutronArray();` // 获取重建出的中子对象数组

### 1.3 TArtNEBULAHPC

- **头文件**：`TArtNEBULAHPC.hh`
- **作用**：存储单个 NEBULA hit 的信息，如 ID、Q、T、Layer、BarID 等。

## 2. 相关宏

### 2.1 recoNebulaTrack.C

- **作用**：调用上述类，完成 NEBULA 的 hit 重建和（如需要）中子重建，并输出结果。
- **典型流程**：
  1. 加载参数（`TArtSAMURAIParameters`）
  2. 打开 RIDF 文件（`TArtEventStore`）
  3. 初始化 `TArtCalibNEBULAHPC`
  4. 循环事件，调用 `ReconstructData()`，获取并输出每个 hit 的信息

## 3. NEBULA 重建流程

### A. Hit 重建（TArtCalibNEBULAHPC）

- 原始数据解码：从 RIDF 文件读取原始信号。
- 重建 hit：`TArtCalibNEBULAHPC::ReconstructData()` 对每个事件进行 hit 重建，输出 `TArtNEBULAHPC`。
- 获取 hit 信息：通过 `GetNumNEBULAHPC()` 和 `GetNEBULAHPC(i)` 获取每个 hit 的物理量（如 Q、T、Layer、BarID）。

### B. 中子候选重建（TArtRecoNeutron）

- **输入**：NEBULA 的 hit（如 `TArtNEBULAHPC` 或 `TArtNEBULAPla`）。
- **重建**：`TArtRecoNeutron::ReconstructData()` 根据 hit 信息，结合时间、能量、几何等，重建出中子候选（如飞行时间、能量、位置等）。
- **输出**：通过 `GetNeutronArray()` 获取所有中子候选对象。