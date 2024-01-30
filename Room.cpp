#include "Room.h"
#include <iostream>
#include "Player.h"

using namespace std;

Room::Room(int board[22][63]) {
    for (int y = 0; y < m_height; y++) {
        for (int x = 0; x < m_width; x++) {
            m_board[y][x] = board[y][x];
        }
    }
}

int Room::getTileAltCode(Player &player) {
    return m_currentBoard[player.getPositionY()][player.getPositionX()];
}
void Room::updateRoom(Player &player) {
    for (int i = 0; i < m_height; i++) { //ROOM RESET
        for (int j = 0; j < m_width; j++) {
            m_board[i][j] = m_currentBoard[i][j];
        }
    }
    m_board[player.getPositionY()][player.getPositionX()] = 'X';
    printRoom();
}

void Room::setBoard(int board[22][63]) {
    for (int y = 0; y < m_height; ++y) {
        for (int x = 0; x < m_width; ++x) {
            m_currentBoard[y][x]=board[y][x];
        }
    }
}

void Room::printRoom(){
        system("cls");
        for (int y = 0; y < m_height; y++) {
            for (int x = 0; x < m_width; x++) {
                cout << char(m_board[y][x]);
            }
            cout << endl;
        }
}