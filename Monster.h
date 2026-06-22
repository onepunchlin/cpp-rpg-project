#ifndef MONSTER_H
#define MONSTER_H

#include <string>
#include <iostream>

class Monster {
private:
    std::string name;
    int hp;
    int attackPower;
    int rewardGold; // 作業要求：擊敗後獲得金幣

public:
    // 建構子
    Monster(std::string monsterName, int startingHp, int startingAttack, int gold);

    // Getter
    std::string getName();
    int getHp();
    int getAttackPower();
    int getRewardGold();

    // 核心功能 (作業要求)
    void attack();               // 攻擊玩家
    void takeDamage(int damage); // 受到傷害
    bool isAlive();              // 判斷怪物是否存活
    void showInfo();             // 顯示怪物資訊
};

#endif