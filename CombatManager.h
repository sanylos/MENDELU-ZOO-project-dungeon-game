//
// Created by NTB-BO-01 on 18.01.2024.
//

#ifndef ZOO_PROJEKT_HRA_20_COMBATMANAGER_H
#define ZOO_PROJEKT_HRA_20_COMBATMANAGER_H
#include "iostream"
#include "Player.h"
#include "Mutant.h"
#include "Inventory.h"
//Class, ktery zajišťuje boj
class CombatManager {
    Mutant* m_mutant;
public:
    CombatManager(Mutant* mutant);

    int battle(Player &m_player);
};


#endif //ZOO_PROJEKT_HRA_20_COMBATMANAGER_H
