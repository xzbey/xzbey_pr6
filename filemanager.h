#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "inventorymanager.h"
#include <QString>

class FileManager
{
public:
    FileManager() = default;

    bool saveToFile(QString filepath, InventoryManager& inventory);

    bool loadToFile(QString filepath, InventoryManager& inventory);
};

#endif // FILEMANAGER_H
