#ifndef SKILL_H
#define SKILL_H

#include <string>
#include <iostream>

class Skill {
private:
    std::string name;
    int damage;
    int mpCost; // 魔力消耗 (雖然 Player 目前沒 MP，但作業要求要有這個變數，我們先放著備用)

public:
    Skill(std::string skillName, int skillDamage, int cost);

    std::string getName();
    int getDamage();
    int getMpCost();

    void use();
    void showInfo();
};

#endif