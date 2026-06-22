#include "Monster.h"

// 實作建構子
Monster::Monster(std::string monsterName, int startingHp, int startingAttack, int gold) {
    name = monsterName;
    hp = startingHp;
    attackPower = startingAttack;
    rewardGold = gold;
}

// 實作 Getter
std::string Monster::getName() { return name; }
int Monster::getHp() { return hp; }
int Monster::getAttackPower() { return attackPower; }
int Monster::getRewardGold() { return rewardGold; }

// 實作核心功能
void Monster::attack() {
    std::cout << "怪物 [" << name << "] 發出嘶吼，發動了攻擊！造成了 " << attackPower << " 點傷害！\n";
}

void Monster::takeDamage(int damage) {
    hp -= damage;
    if (hp < 0) hp = 0; // 血量不低於0
    std::cout << "怪物 [" << name << "] 受到了 " << damage << " 點傷害！剩餘血量: " << hp << "\n";
}

bool Monster::isAlive() {
    return hp > 0;
}

void Monster::showInfo() {
    std::cout << "【怪物資訊】" << name << " | 血量: " << hp << " | 攻擊力: " << attackPower << " | 掉落金幣: " << rewardGold << "G\n";
}