#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include "gameitem.h"


class InventoryManager {
private:
    std::vector<std::unique_ptr<GameItem>> items;
public:
    void addItem(std::unique_ptr<GameItem> item);

    void removeItem(int index);

    void editItem(int index, QString type_name, QString new_parametr);

    void editItem(int index, QString type_name, int new_parametr);

    GameItem* getItem(int index);

    int getSize();

    static bool sortByName(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2);
    static bool sortByRarity(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2);
    static bool sortByCategory(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2);
    static bool sortByType(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2);
    static bool sortByDurability(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2);
    static bool sortByWeight(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2);
    static bool sortByAttack(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2);
    static bool sortByDefense(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2);

    void sort(QString SORT_TYPE);

    std::vector<int> searchItems(
        bool checkDurability, int minDurability, int maxDurablity,
        bool checkWeight, int minWeight, int maxWeight,
        bool checkAttack, int minAttack, int maxAttack,
        bool checkDefense, int minDefenseMin, int maxDefense);
};

#endif // INVENTORYMANAGER_H
