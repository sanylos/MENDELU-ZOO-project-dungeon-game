#ifndef ZOO_PROJEKT_HRA_20_PLAYER_H
#define ZOO_PROJEKT_HRA_20_PLAYER_H
#include "iostream"
class Player {
private:
    int m_positionX;
    int m_positionY;
    int m_health;
    int m_damage;
public:
    Player();
    void move(char direction);//metoda zajistuje pohybovani hrace
    int getPositionX();
    int getPositionY();
    void setPositionX(int x);
    void setPositionY(int y);
    int getHealth();
    void setHealth(int health);
    int getDamage();
    void setDamage(int damage);
};

#endif //ZOO_PROJEKT_HRA_20_PLAYER_H
