#include "inventorymanager.h"

void InventoryManager::addItem(std::unique_ptr<GameItem>) {

}


void InventoryManager::removeItem(int index) {

}


template <typename T>
void InventoryManager::editItem(int index, QString type_name, T new_parametr) {
    if (index < 0 or index >= items.size())
        return;

    switch (type_name) {
    case "name":
        items[index]->setName(new_parametr);
        break;
    case "type":
        items[index]->setType(new_parametr);
        break;
    case "rarity":
        items[index]->setRarity(new_parametr);
        break;
    case "durability":
        items[index]->setDurability(new_parametr);
        break;
    case "weight":
        items[index]->setWeight(new_parametr);
        break;
    case "damage":
        items[index]->setDamage(new_parametr);
        break;
    case "defense":
        items[index]->setDefense(new_parametr);
        break;
    default:
        break;
    }

}
