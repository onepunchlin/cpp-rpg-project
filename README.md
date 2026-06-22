# C++ Terminal RPG Project

這是一個由 National University of Tainan (NUTN) 學生開發的文字版 RPG 戰鬥模擬專案，旨在透過 C++ 物件導向程式設計實作回合制戰鬥系統。

## 專案成員與 Git 分工紀錄
本專案嚴格遵守多人協作規範，透過 GitHub 分支 (Branch) 與 PR (Pull Request) 進行開發：

| 成員/帳號 | 職責 | 主要貢獻 |
| :--- | :--- | :--- |
| **onepunchlin** | 專案主導 | 核心戰鬥迴圈設計、Git 整合與 Code Review |
| **linliangliang61-lgtm** | 戰鬥系統設計 | Monster 與 Skill 類別開發、分支功能實作 |
| **linonce1112-afk** | 後勤支援與文件 | Item 類別開發、專案測試、說明文件撰寫 |

## 遊戲功能介紹
本遊戲包含四大核心類別，構建出完整的戰鬥體驗：
*   **Player**: 處理勇者血量、攻擊與動作邏輯。
*   **Monster**: 處理敵方史萊姆、哥布林或龍的數值與反擊。
*   **Item**: 處理回復藥水的使用與數量檢核。
*   **Skill**: 處理火球術的魔法傷害與消耗邏輯。

## 額外創意功能
1.  **多重怪物選擇 (指標應用)**：使用 C++ 指標 (Pointer) `Monster* targetMonster` 動態指向玩家選擇的難度，無需重複編寫戰鬥邏輯。
2.  **戰術回合機制**：實作「跳過回合 (防禦)」功能，讓玩家能在戰術上選擇觀測敵人，而非強制攻擊。

## 編譯與執行方法
請確保已安裝 `g++` 編譯器，在專案目錄下執行以下指令：

1. **編譯所有檔案**：
```bash
   g++ main.cpp Player.cpp Monster.cpp Item.cpp Skill.cpp -o game.exe