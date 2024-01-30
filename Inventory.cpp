#include "Inventory.h"
#include "Item.h"

Inventory::Inventory() {
    m_items = {};
    m_capacity = 6;
}

void Inventory::addItem(Item *item) {
    if (m_capacity<=0){
        std::cerr<<"Capacity is insufficient"<<std::endl;
    } else {
        m_items.push_back(item);
    }
}
bool Inventory::findById(int id) {
    for (int i = 0; i < m_items.size(); i++) {
        if (m_items.at(i)->getIdOfItem() == id) {
            return 1;
        }else{
            return 0;
        }
    }
    return 0;
}

int Inventory::getCapacity() {
    return m_capacity;
}

void Inventory::printInventory() {
        std::cout << R"(
         _____                      _
        |_   _|                    | |
          | |  _ ____   _____ _ __ | |_ ___  _ __ _   _
          | | | '_ \ \ / / _ \ '_ \| __/ _ \| '__| | | |
         _| |_| | | \ V /  __/ | | | || (_) | |  | |_| |
        |_____|_| |_|\_/ \___|_| |_|\__\___/|_|   \__, |
                                                   __/ |
                                                   |___/
)" << '\n';
        if(!m_items.empty()){
        std::cout<<"Items: "<<std::endl;
        for(int i = 0; i < m_items.size(); i++) {
            std::cout << m_items.at(i)->getItemType() << ": " << m_items.at(i)->getItemName() << std::endl;
        }
        }else{
            std::cout<<"You don't have any items"<<std::endl;
        }
        std::cout<<"Press any key to resume game: "<<std::endl;
}

void Inventory::deleteItem(Item *item) {
    for (int i = 0; i < m_items.size(); ++i) {
        if (m_items.at(i)->getItemName()!=item->getItemName()){
            std::cerr<<"You cant delete this item from inventory";
        } else {
            m_items.at(i)->getItemName().erase();
        }
    }
}

