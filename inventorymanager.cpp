#include "inventorymanager.h"

void InventoryManager::addItem(std::unique_ptr<GameItem> item) {
    items.push_back(std::move(item));
    qDebug() << "item " << typeid(item).name() << " add";
}


void InventoryManager::removeItem(int index) {
    items.erase(items.cbegin() + index);
}


template <typename T>
void InventoryManager::editItem(int index, QString type_name, T new_parametr) {
    if (index < 0 or index >= items.size())
        return;


    if (type_name == "name")
        items[index]->setName(new_parametr);

    else if (type_name == "type")
        items[index]->setType(new_parametr);

    else if (type_name == "rarity")
        items[index]->setRarity(new_parametr);

    else if (type_name == "durability")
        items[index]->setDurability(new_parametr);

    else if (type_name == "weight")
        items[index]->setWeight(new_parametr);

    else if (type_name == "damage") {
        if (Weapon *weapon = dynamic_cast<Weapon*>(items[index].get()))
            weapon->setDamage(new_parametr);
    }

    else if (type_name == "defense") {
        if (Armor* armor = dynamic_cast<Armor*>(items[index].get()))
            armor->setDefense(new_parametr);
    }

}


int InventoryManager::getSize() {
    return items.size();
}


GameItem* InventoryManager::getItem(int index) {
    return items[index].get();
}
