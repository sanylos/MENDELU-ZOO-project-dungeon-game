//
// Created by NTB-BO-01 on 18.01.2024.
//

#include "CombatManager.h"
CombatManager::CombatManager(Mutant* mutant){
    m_mutant=mutant;
}
int CombatManager::battle(Player &m_player) {
    char rozhodnuti;
    while (true) {
        std::cout << "Enemies are right in front of you and now you can: " << std::endl
                  << std::endl << "1.  " << "Run away"
                  << std::endl << "2.  " << "Fight "
                  << std::endl<<std::endl;
        std::cout<<"Yout health: "<<m_player.getHealth()<<std::endl
        <<"Your damage: "<<m_player.getDamage()<<std::endl;
        std::cout<<"----------------------------------------------------"<<std::endl;
        std::cout<<"Enemy health: "<<m_mutant->getHealth()<<std::endl
                 <<"Enemy damage: "<<m_mutant->getAttack()<<std::endl;
        std::cin >> rozhodnuti;
        if (rozhodnuti != '1' and rozhodnuti != '2') {
            std::cout << "Please write the number 1 or 2" << std::endl;
            std::cin >> rozhodnuti;
        }
        if (rozhodnuti == '1') {
            return 0;
        } else if (rozhodnuti == '2') {
            m_player.setHealth(m_player.getHealth() - m_mutant->getAttack());
            m_mutant->setHealth(m_mutant->getHealth() - m_player.getDamage());
            if (m_player.getHealth() <= 0) {
                return 1;
            }else if(m_mutant->getHealth() <= 0) {
                std::cout << "You kill the enemy";
                    return 2;
                }
        }
    }
}
