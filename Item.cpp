#include "Item.h"

// 實作建構子
Item::Item(std::string itemName, std::string itemType, int effect, int qty) {
    name = itemName;
    type = itemType;
    effectValue = effect;
    quantity = qty;
}

// 實作 Getter
std::string Item::getName() { return name; }
std::string Item::getType() { return type; }
int Item::getEffectValue() { return effectValue; }
int Item::getQuantity() { return quantity; }

// 實作核心功能
bool Item::isAvailable() {
    return quantity > 0;
}

void Item::use() {
    if (isAvailable()) {
        quantity--; // 使用後數量減 1
        std::cout << "使用了 [" << name << "]！產生了 " << effectValue << " 點效果。\n";
    } else {
        std::cout << "[" << name << "] 已經用完了，無法使用！\n";
    }
}

void Item::showInfo() {
    std::cout << "【道具】" << name << " | 類型: " << type << " | 效果值: " << effectValue << " | 剩餘數量: " << quantity << "\n";
}