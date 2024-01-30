#include "Weapon.h"
#include "Player.h"
Weapon::Weapon(std::string name,std::string type,int attackBonus):Item(name,type){
    m_attackBonus=attackBonus;
}
int Weapon::getAttackBonus(){
    return m_attackBonus;
}
void Weapon::setAttackBonus(int bonus){
    m_attackBonus=bonus;
}
void Weapon::useItem(Player &player){
    int m_damage=player.getDamage();
    player.setDamage(m_damage+=m_attackBonus);
}