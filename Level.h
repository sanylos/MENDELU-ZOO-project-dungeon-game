//
// Created by NTB-BO-01 on 18.01.2024.
//

#ifndef ZOO_PROJEKT_HRA_20_LEVEL_H
#define ZOO_PROJEKT_HRA_20_LEVEL_H

#include "iostream"
#include "Menu.h"
#include "EnemyFactory.h"
#include "EasyEnemyFactory.h"
#include "MediumEnemyFactory.h"
#include "HardEnemyFactory.h"
/*
 * Class ktery zajistuje to,ze podle zvolene v menu obtiznosti vznikne spravne enemyFactory
 */
class Level {
public:
    Level();
    void monsterByDificulty(std::string difficulty,EnemyFactory* &enemyFactory);
};


#endif //ZOO_PROJEKT_HRA_20_LEVEL_H
