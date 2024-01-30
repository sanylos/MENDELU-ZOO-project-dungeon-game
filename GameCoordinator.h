#ifndef ZOO_PROJEKT_HRA_20_GAMECOORDINATOR_H
#define ZOO_PROJEKT_HRA_20_GAMECOORDINATOR_H
#include <iostream>
#include "Menu.h"
#include "Player.h"
#include "Room.h"
#include "Potion.h"
#include "conio.h"
#include "EnemyFactory.h"
#include "EasyEnemyFactory.h"
#include "MediumEnemyFactory.h"
#include "HardEnemyFactory.h"
#include "Inventory.h"
#include "Level.h"
#include "CombatManager.h"
#include "Mutant.h"
#include "Weapon.h"
#include "Quests.h"
#include "Npc.h"
#include "string"
using namespace std;
/*
 * Třída, která spojuje všechno
 */
class GameCoordinator {
private:
    bool gameStateRun;
    string gameDifficulty;
public:
    void startNewGame(string difficulty);
    void resumesavedGame();
};

#endif //ZOO_PROJEKT_HRA_20_GAMECOORDINATOR_H