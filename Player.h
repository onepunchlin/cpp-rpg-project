#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

class Player {
private:
    std::string name;
    int hp;
    int attackPower;
    // item 和 skill 的部分，我們等團隊的另外兩個帳號寫好再加進來！

public:
    // 建構子 (Constructor)
    Player(std::string playerName, int startingHp, int startingAttack);

    // Getter & Setter (作業規定必備的外部存取介面)
    std::string getName();
    int getHp();
    int getAttackPower();
    void setHp(int newHp);

    // 核心功能 (作業要求)
    void attack();               // 攻擊怪物
    void takeDamage(int damage); // 受到傷害
    bool isAlive();              // 判斷是否存活
    void useItem();              // 使用物品
};

#endif