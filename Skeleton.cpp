//
// Created by NTB-BO-01 on 24.01.2024.
//

#include "Skeleton.h"
Skeleton::Skeleton(int power,int health) {
    m_power = power;
    m_health=health;
}
int Skeleton::getAttack(){
    return m_power;
}
void Skeleton::doAttack(Player* player) {
    int playerHealth = player->getHealth();
    player->setHealth(playerHealth-m_power);
}
int Skeleton::getHealth(){
    return m_health;
}
void Skeleton::setHealth(int health){
    m_health=health;
}