//
// Created by NTB-BO-01 on 18.01.2024.
//

#include "Level.h"
#include "Mutant.h"
Level::Level(){}
void Level::monsterByDificulty(std::string difficulty,EnemyFactory* &enemyFactory){
    if(difficulty=="easy"){
        enemyFactory = new EasyEnemyFactory;
    }else if(difficulty=="medium") {
        enemyFactory = new MediumEnemyFactory;
    }else if(difficulty=="hard"){
        enemyFactory = new HardEnemyFactory;
    }
}