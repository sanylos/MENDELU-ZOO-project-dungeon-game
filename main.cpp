#include <iostream>
#include <cstdlib>
#include <iomanip>

#include "Menu.h"
#include "GameCoordinator.h"
#include "Inventory.h"
#include "Item.h"
#include "Potion.h"

int main() {
    Menu* menu = new Menu();
    menu->PrintMenu();
    delete menu;
    return 0;
}