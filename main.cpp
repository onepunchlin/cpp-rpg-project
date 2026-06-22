#include "Player.h"
#include <cstdlib> // 新增這行，為了使用 system()
#include <iostream>

int main() {
  system("chcp 65001"); // 新增這行，強迫 Windows 終端機使用 UTF-8 顯示中文

  std::cout << "=== C++ 文字 RPG 遊戲啟動 ===\n\n";

  // 實例化一個玩家物件
  Player hero("勇者", 100, 20);

  std::cout << "歡迎，" << hero.getName() << "！\n";
  std::cout << "初始血量: " << hero.getHp()
            << " | 攻擊力: " << hero.getAttackPower() << "\n\n";

  // 測試一下動作邏輯
  hero.attack();
  hero.takeDamage(15);
  hero.useItem();

  if (hero.isAlive()) {
    std::cout << "\n勇者依然屹立不搖，準備迎接怪物的挑戰！\n";
  }

  return 0;
}