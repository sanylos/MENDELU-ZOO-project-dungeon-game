#ifndef ZOO_PROJEKT_HRA_20_ROOM_H
#define ZOO_PROJEKT_HRA_20_ROOM_H
#include "Player.h"
#include "string"
#include "EnemyFactory.h"
using namespace std;
class Room {
private:
    const int m_width=63;
    const int m_height=22;
    int m_board[22][63];
    int m_currentBoard[22][63];
public:
    Room(int board[22][63]);
    void updateRoom(Player& player);
    void printRoom();
    void setBoard(int board[22][63]);
    int getTileAltCode(Player& player);
};


#endif //ZOO_PROJEKT_HRA_20_ROOM_H