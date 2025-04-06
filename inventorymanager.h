#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include "gameitem.h"
#include <QVector>

class InventoryManager {
private:
    QVector<std::unique_ptr<GameItem>> items;
public:
    void addItem(std::unique_ptr<GameItem>);

    void removeItem(int index);

    template <typename T>
    void editItem(int index, QString type_name, T new_parametr);



};

#endif // INVENTORYMANAGER_H
