#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player{
    virtual char makeMove() = 0;
    std::string getName();
    std::string _name;
    Player(std::string name);
    ~Player();
};

#endif