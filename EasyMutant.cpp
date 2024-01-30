#include "EasyMutant.h"
EasyMutant::EasyMutant(int power,int health) {
    m_power = power;
    m_health=health;
}
int EasyMutant::getAttack(){
    return m_power;
}
void EasyMutant::doAttack(Player* player) {
    int playerHealth = player->getHealth();
    player->setHealth(playerHealth-m_power);
}
int EasyMutant::getHealth(){
    return m_health;
}
void EasyMutant::setHealth(int health){
    m_health=health;
}