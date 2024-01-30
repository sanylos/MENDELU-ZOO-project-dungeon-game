//
// Created by NTB-BO-01 on 22.01.2024.
//

#ifndef ZOO_PROJEKT_HRA_20_NPC_H
#define ZOO_PROJEKT_HRA_20_NPC_H
#include "iostream"
#include "GameCoordinator.h"
/*
 * Trida pro vytvareni nps a jeho dialogu
 */
class Npc {
public:
    Npc();
    void welcome();
    void comunicateAboutFirstQuest(bool &state);
    void comunicateAboutSecondQuest();
    void comunicateAboutThirdQuest();
    void finalComunicate();
};


#endif //ZOO_PROJEKT_HRA_20_NPC_H
