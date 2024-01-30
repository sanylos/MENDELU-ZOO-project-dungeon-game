#include "Potion.h"
#include "Player.h"
Potion::Potion(std::string name,std::string type,int healthBonus): Item(name,type){
    m_healthBonus=healthBonus;
}
int Potion::getHealthBonus(){
    return m_healthBonus;
}
void Potion::useItem(Player &player) {
    int m_health=player.getHealth();
    if(m_health<100){
        player.setHealth(m_health+=m_healthBonus);
    }else{
        std::cout << "Sorry but you can't be any healthier" << std::endl;
    }
}