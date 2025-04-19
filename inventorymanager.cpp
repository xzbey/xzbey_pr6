#include "inventorymanager.h"

void InventoryManager::addItem(std::unique_ptr<GameItem> item) {
    items.push_back(std::move(item));
    qDebug() << "item " << typeid(item).name() << " add";
}


void InventoryManager::removeItem(int index) {
    items.erase(items.cbegin() + index);
}


void InventoryManager::editItem(int index, QString type_name, QString new_parametr) {
    if (index < 0 or index >= items.size())
        return;

    if (type_name == "name")
        items[index]->setName(new_parametr);

    else if (type_name == "type")
        items[index]->setType(new_parametr);

    else if (type_name == "rarity")
        items[index]->setRarity(new_parametr);
}

void InventoryManager::editItem(int index, QString type_name, int new_parametr) {
    if (index < 0 or index >= items.size())
        return;

    if (type_name == "durability")
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

//------------------------------------------

int InventoryManager::getSize() {
    return items.size();
}


GameItem* InventoryManager::getItem(int index) {
    return items[index].get();
}

//------------------------------------------

bool InventoryManager::sortByName(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2) {
    return item1->getName() < item2->getName();
}

bool InventoryManager::sortByRarity(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2) {
    return GameItem::RarityPriority[item1->getRarity()] < GameItem::RarityPriority[item2->getRarity()];
}

bool InventoryManager::sortByCategory(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2) {
    return item1->getCategory() < item2->getCategory();
}

bool InventoryManager::sortByType(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2) {
    return item1->getType() < item2->getType();
}

bool InventoryManager::sortByDurability(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2) {
    return item1->getDurability() < item2->getDurability();
}

bool InventoryManager::sortByWeight(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2) {
    return item1->getWeight() < item2->getWeight();
}

bool InventoryManager::sortByAttack(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2) {
    Weapon* weapon1 = dynamic_cast<Weapon*>(item1.get());
    Weapon* weapon2 = dynamic_cast<Weapon*>(item2.get());

    if (weapon1 and weapon2)
        return weapon1->getDamage() < weapon2->getDamage();

    return weapon2 != nullptr;
}

bool InventoryManager::sortByDefense(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2) {
    Armor* armor1 = dynamic_cast<Armor*>(item1.get());
    Armor* armor2 = dynamic_cast<Armor*>(item2.get());

    if (armor1 and armor2)
        return armor1->getDefense() < armor2->getDefense();

    return armor2 != nullptr;
}

//------------------------------------------

void InventoryManager::sort(QString SORT_TYPE) {
    bool (*func)(std::unique_ptr<GameItem>&, std::unique_ptr<GameItem>&) = nullptr;

    if (SORT_TYPE == "name")
        func = InventoryManager::sortByName;

    else if (SORT_TYPE == "rarity")
        func = InventoryManager::sortByRarity;

    else if (SORT_TYPE == "category")
        func = InventoryManager::sortByCategory;

    else if (SORT_TYPE == "type")
        func = InventoryManager::sortByType;

    else if (SORT_TYPE == "durability")
        func = InventoryManager::sortByDurability;

    else if (SORT_TYPE == "weight")
        func = InventoryManager::sortByWeight;

    else if (SORT_TYPE == "attack")
        func = InventoryManager::sortByAttack;

    else if (SORT_TYPE == "defense")
        func = InventoryManager::sortByDefense;

    if (func and !items.empty())
        std::sort(items.begin(), items.end(), func);

}

//------------------------------------------

std::vector<int> InventoryManager::searchItems(
    bool checkDurability, int minDurability, int maxDurablity,
    bool checkWeight, int minWeight, int maxWeight,
    bool checkAttack, int minAttack, int maxAttack,
    bool checkDefense, int minDefense, int maxDefense)
{
    std::vector<int> results;

    bool matches; int attack, defense;
    for (int i = 0; i < items.size(); i++) {
        matches = true;

        if (checkDurability and (items[i]->getDurability() < minDurability or items[i]->getDurability() > maxDurablity))
            matches = false;

        if (checkWeight and (items[i]->getWeight() < minWeight or items[i]->getWeight() > maxWeight))
            matches = false;

        if (checkAttack) {
            attack = 0;
            if (Weapon* weapon = dynamic_cast<Weapon*>(items[i].get()))
                attack = weapon->getDamage();

            if (attack < minAttack or attack > maxAttack)
                matches = false;
        }

        if (checkDefense) {
            defense = 0;
            if (Armor* armor = dynamic_cast<Armor*>(items[i].get()))
                defense = armor->getDefense();

            if (defense < minDefense or defense > maxDefense)
                matches = false;
        }

        if (matches)
            results.push_back(i);
    }

    return results;











}












