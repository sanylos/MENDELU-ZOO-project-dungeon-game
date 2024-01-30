#include "Player.h"
Player::Player() {
    m_positionX=21;
    m_positionY=9;
    m_health=100;
    m_damage = 25;
}

int Player::getPositionX() {
    return m_positionX;
}

int Player::getDamage(){
    return m_damage;
}

void Player::setDamage(int damage){
    m_damage=damage;
}

int Player::getHealth() {
    return m_health;
}

void Player::setHealth(int health) {
    m_health = health;
}

int Player::getPositionY() {
    return m_positionY;
}

void Player::setPositionX(int x) {
    m_positionX=x;
}

void Player::setPositionY(int y) {
    m_positionY=y;
}

void Player::move(char direction) {
    switch (direction) {
        case 'w':
            m_positionY--;
            break;
        case 's':
            m_positionY++;
            break;
        case 'a':
            m_positionX--;
            break;
        case 'd':
            m_positionX++;
            break;
    }
}


