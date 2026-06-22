#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

class Item {
private:
    std::string name;
    std::string type;   // 例如: "heal" (回復) 或 "buff" (增益)
    int effectValue;    // 效果數值
    int quantity;       // 擁有數量

public:
    // 建構子
    Item(std::string itemName, std::string itemType, int effect, int qty);

    // Getter
    std::string getName();
    std::string getType();
    int getEffectValue();
    int getQuantity();

    // 核心功能 (作業要求)
    void use();          // 使用物品
    void showInfo();     // 顯示物品資訊
    bool isAvailable();  // 判斷物品是否可使用
};

#endif