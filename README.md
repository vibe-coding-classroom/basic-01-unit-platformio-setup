# Unit: PlatformIO 環境搭建 (VS Code + PlatformIO Setup)

歡迎來到專業硬體開發的第一步！在本單元中，你將學習如何從 Arduino IDE 轉移到更強大的 **VS Code + PlatformIO** 開發環境。這不僅是換一個編輯器，更是學習現代軟體工程的專案管理思維。

## 🎯 學習目標
1. 掌握 PlatformIO 的專案結構與 `platformio.ini` 配置。
2. 理解 C++ 代碼規範與 `#include` 邏輯。
3. 學會使用 `lib_deps` 自動化管理第三方庫。
4. 掌握多環境配置與調速技巧。

## 📂 專案結構說明
*   `platformio.ini`: 核心配置文件，負責硬體定義與依賴管理。
*   `src/main.cpp`: 你的原始碼存放在這裡。
*   `docs/ENV_CHECK.md`: 你的環境報告書，完成任務後請在此記錄。
*   `assets/`: 請將你的實驗截圖存放在此。

## 🚀 任務清單

### 任務 1：PlatformIO 首航與語法修正
*   打開 `src/main.cpp`。
*   你會發現代碼有紅字報錯。請修正它，讓 PlatformIO 能夠識別 Arduino 的核心函式。
*   **驗證**：按下下方狀態列的 `✔` (Compile) 按鈕，直到出現綠色的 `SUCCESS`。

### 任務 2：自動化依賴管家
*   在 `platformio.ini` 中加入 `bblanchon/ArduinoJson` 庫。
*   再次點擊編譯，觀察 PlatformIO 如何自動下載並安裝庫檔案。
*   **驗證**：取消 `src/main.cpp` 中關於 `ArduinoJson` 的註解，確保編譯通過。

### 任務 3：解決亂碼與多環境配置
*   在 `platformio.ini` 中設定 `monitor_speed = 115200` 以解決串口亂碼。
*   建立一個名為 `[env:release]` 的新區塊，並將 `upload_speed` 提高到 `921600`。
*   **驗證**：提交最終的 `platformio.ini` 檔案。

---

## 📝 提交要求
1. 完成 `docs/ENV_CHECK.md` 中的所有勾選。
2. 在 `assets/` 中存入「IntelliSense 常數提示」與「編譯成功」的截圖。
3. 將所有變更 `git commit` 並 `push` 到 GitHub。

> 「好的工程師，是能配置出最強大武器的人，讓代碼自己去管理依賴，讓環境自己去適應板子。」
