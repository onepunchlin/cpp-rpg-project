#include "Skill.h"

Skill::Skill(std::string skillName, int skillDamage, int cost) {
    name = skillName;
    damage = skillDamage;
    mpCost = cost;
}

std::string Skill::getName() { return name; }
int Skill::getDamage() { return damage; }
int Skill::getMpCost() { return mpCost; }

void Skill::use() {
    std::cout << "施放了技能 [" << name << "]！造成了 " << damage << " 點強力傷害！(消耗 MP: " << mpCost << ")\n";
}

void Skill::showInfo() {
    std::cout << "【技能】" << name << " | 傷害: " << damage << " | 消耗魔力: " << mpCost << "\n";
}