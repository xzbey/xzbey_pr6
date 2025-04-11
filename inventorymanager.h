#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include "gameitem.h"


class InventoryManager {
private:
    std::vector<std::unique_ptr<GameItem>> items;
public:
    void addItem(std::unique_ptr<GameItem> item);

    void removeItem(int index);

    template <typename T>
    void editItem(int index, QString type_name, T new_parametr);

    GameItem* getItem(int index);

    int getSize();

};

#endif // INVENTORYMANAGER_H
