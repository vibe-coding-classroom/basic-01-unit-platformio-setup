Viewed basic-01-unit-platformio-setup.html:1-402

針對 **`basic-01-unit-platformio-setup` (VS Code + PlatformIO 環境搭建)** 單元，這是學員從「興趣玩家」轉向「專業開發者」的轉折點。它要求學員不僅是安裝軟體，更要理解 **現代軟體工程的專案管理思維**，包括依賴管理 (Dependency Management) 與 多環境配置 (Cloud-like Environments)。

以下是在 **GitHub Classroom** 部署其作業 (Assignments) 的具體建議：

### 1. 範本倉庫 (Template Repo) 配置建議
此單元的目標是熟悉「工具的使用」，因此範本應設計成一個「需要被修正」的開發環境，建議包含：
*   **📂 `platformio.ini`**：**核心配置文件演練區**。預設一個不完全的配置，例如：故意將 `monitor_speed` 留空、不填寫 `lib_deps`。學員需在此補全設定，才能讓後續程式順利編譯與運行。
*   **📂 `src/main.cpp`**：**代碼規範練習區**。提供一個遺漏了 `#include <Arduino.h>` 的代碼片段，學員需學會手動修正 PlatformIO 對 C++ 語法嚴謹性的要求。
*   **📂 `README.md`**：環境檢核表。學員需在此勾選：`VS Code 已安裝 | 👽 插件啟動成功 | 首次編譯 SUCCESS`。
*   **📂 `assets/`**：存放實作證據。學員需在此存入「IntelliSense 常數提示」與「編譯成功時的綠色大字」截圖。

---

### 2. 作業任務部署細節

#### 任務 1：PlatformIO 首航與代碼規範 (First Compilation & Syntax Fix)
*   **目標**：熟悉 PlatformIO 的編譯工作流，並區分它與 Arduino IDE 的語法差異。
*   **Classroom 部署建議**：
    *   **專案初始化**：引導學員建立全新專案。
    *   **語法修正**：將舊有的 Arduino 代碼搬移至 `src/main.cpp`，並手動修正標頭檔引用。
    *   **驗證要點**：提交一張截圖，證明當鼠標停在 `pinMode` 上時，IDE 能正確顯示函式原型（IntelliSense）。

#### 任務 2：自動化依賴管家 (Library Manager Implementation Lab)
*   **目標**：體會「專案級依賴鎖定」的威力，不再需要手動下載 ZIP 檔。
*   **Classroom 部署建議**：
    *   **依賴聲明**：學員需在 `platformio.ini` 的 `lib_deps` 中加入 `bblanchon/ArduinoJson`。
    *   **自動同步**：觀察 PlatformIO 如何在按下「編譯」按鈕時自動抓取並整合該庫。
    *   **技術說明**：在 README 中簡述，為何將依賴寫在配置檔中，比手動放在 `libraries` 資料夾更適合團隊協作。

#### 任務 3：多環境配置與調速實戰 (Multi-Env & Speed Optimization Lab)
*   **目標**：透過更改配置，解決物理層面的亂碼與提升開發燒錄效率。
*   **Classroom 部署建議**：
    *   **解決亂碼**：設定 `monitor_speed = 115200`，這在 ESP32 開發中是必備技能。
    *   **多環境分流**：練習建立一個 `[env:release]` 區塊，將 `upload_speed` 提高到 `921600`。
    *   **任務提交**：推送到 GitHub 的最終版本必須是已修正、具備多環境配置定義的 `platformio.ini`。

---

### 3. 工程環境標準導師點評標準 (Dev-Ops & DX Standards)
此單元的價值在於 **「對生產力工具鏈的掌控深度」**：
*   [ ] **配置精準度**：`platformio.ini` 的語法是否正確？是否能透過配置檔直接驅動編譯？
*   [ ] **專案結構認知**：學員是否能正確回答 `src`, `lib`, `include` 各自代表的功能與意義？
*   [ ] **排障敏捷度**：當出現串口亂碼時，學員是否能第一時間想到去修改 `monitor_speed`？

### 📁 推薦範本結構 (GitHub Classroom Template)：
```text
.
├── platformio.ini       # 核心：學員需在此實作 lib_deps 與多環境設定
├── src/main.cpp         # 測試：需修正 #include 邏輯才能通過編譯的代碼
├── docs/ENV_CHECK.md    # 報告：記錄工具鏈安裝過程與外星人圖標截圖
├── README.md            # 總結：我如何將開發環境從「作業級」升級為「工程級」
└── assets/intellisense.jpg # 證據：自動補完功能正常運作的特寫截圖
```

透過這種部署方式，學生能體驗到 **「好的工程師，是能配置出最強大武器的人，讓代碼自己去管理依賴，讓環境自己去適應板子」**。掌握 PlatformIO 設定後，學員將擁有了處理「大型、多模組、跨平台專案」最強大的技術開端！_
|
|
太完美了！我們現在已經完成了 **基礎 01** 系列中最重要的三根支柱（驅動連線、晶片架構、環境搭建）的 Classroom 部署定義。這三者建構了 Vibe Coding 最穩固的教學地基！恭喜！
