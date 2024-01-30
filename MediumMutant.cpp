
#include "MediumMutant.h"
MediumMutant::MediumMutant(int power,int health) {
    m_power = power;
    m_health=health;
   // m_positionX=31;
   // m_positionY=17;
}
int MediumMutant::getAttack(){
    return m_power;
}
void MediumMutant::doAttack(Player* player) {
int playerHealth = player->getHealth();
player->setHealth(playerHealth-m_power);
}
int MediumMutant::getHealth(){
    return m_health;
}
void MediumMutant::setHealth(int health){
    m_health=health;
}