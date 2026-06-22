#include "Player.h"

// 實作建構子：初始化角色數值
Player::Player(std::string playerName, int startingHp, int startingAttack) {
    name = playerName;
    hp = startingHp;
    attackPower = startingAttack;
}

// 實作 Getter
std::string Player::getName() { return name; }
int Player::getHp() { return hp; }
int Player::getAttackPower() { return attackPower; }

// 實作 Setter
void Player::setHp(int newHp) { hp = newHp; }

// 實作核心功能
void Player::takeDamage(int damage) {
    hp -= damage;
    if (hp < 0) hp = 0; // 血量不能扣到變負數
    std::cout << name << " 受到了 " << damage << " 點傷害！剩餘血量: " << hp << "\n";
}

bool Player::isAlive() {
    return hp > 0;
}

void Player::attack() {
    std::cout << name << " 揮舞武器，發動了攻擊！造成了 " << attackPower << " 點傷害！\n";
}

void Player::useItem() {
    std::cout << name << " 打開了背包... (等待後勤支援帳號實作道具系統)\n";
}