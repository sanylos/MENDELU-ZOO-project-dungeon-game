
#include "HardMutant.h"
HardMutant::HardMutant(int power,int health) {
    m_power = power;
    m_health=health;
}
int HardMutant::getAttack(){
    return m_power;
}
void HardMutant::doAttack(Player* player) {
    int playerHealth = player->getHealth();
    player->setHealth(playerHealth-m_power);
}
int HardMutant::getHealth(){
    return m_health;
}
void HardMutant::setHealth(int health){
    m_health=health;
}