#ifndef ZOO_PROJEKT_HRA_20_INVENTORY_H
#define ZOO_PROJEKT_HRA_20_INVENTORY_H

#include <iostream>
#include "vector"
#include "Item.h"
/*
 *Class ktery drží itemy hrače a umožnuje s nimi manipulovat
 */

class Inventory {
private:
    std::vector<Item*> m_items;
    int m_capacity;
public:
    Inventory();
    void addItem(Item* item);
    int getCapacity();
    //metoda vypisuje všichni itemy ze inventare při stisknuti 'i'
    void printInventory();
    bool findById(int id);
    void deleteItem(Item* item);
};


#endif //ZOO_PROJEKT_HRA_20_INVENTORY_H
