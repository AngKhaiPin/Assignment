#ifndef PF_HELPER_H
#define PF_HELPER_H
#include <iostream>
#include <windows.h>
#include <time.h>
#include <vector>
#include <iterator>
#include <string>
#include <cmath>
#include <iomanip>

namespace pf
{
    int ClearScreen();
    int Pause();
}

class Map
{
    std::vector<std::vector<char>> map_;
    int rows_, columns_;

public:
    int rows, columns;
    void init(int rows, int columns);
    void display() const;
    char getObject(int x, int y) const;
    void setObject(int x, int y, char ch);
    void setZomPos(int x, int y, int z);
};

class Player
{
    char AlienSymbol = 'A';
    int posX_, posY_;

    public:
        bool hitObject;
        bool hitBarrier;
        int prevX;
        int prevY;
        int posX;
        int posY;
        int AlienAtk = 0;
        int randomNum = rand() % 3 + 1;
        int const AlienHp = 100 + (randomNum * 50);
        int const MaxAlienHp = AlienHp;
        void InitialLanding(Map &map_, float x, float y);
        void AlienMove(Map &map_, std::string inp, int x, int y);
        void AlienPlacement(Map &map_);
        void upPos(Map &map_);
        void downPos(Map &map_);
        void leftPos(Map &map_);
        void rightPos(Map &map_);
};

class Enemy
{
    int EPosX_, EPosY_;

public:
    int randomHp = rand() % 2 + 1;
    int randomAtk = rand() % 2 + 1;
    int randomRng = rand() % 5 + 1;
    int ZombieCount = 1;
    int ZombieHp = 100 + (randomHp * 50);
    int ZombieAtk = 5 + (randomAtk * 5);
    int ZombieRange = randomRng;
    std::vector<int> ZombHpVec;
    std::vector<int> ZombAtkVec;
    std::vector<int> ZombRngVec;
    void ZombieCreation();
    void ZombieLanding(Map &map_, int x, int y);
};

char randomiseItems(char x);

#endif


//TO DO: SETTLE HOW THE FUCK DO I PUT IN THE ALIEN AND MAKE IT MOVE
//       MERGE MAIN AND HEADER OR ELSE ITS GONNA LOOK NASTY