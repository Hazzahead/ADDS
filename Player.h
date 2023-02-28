#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player{
    public:
    Player(){};
    Player(std::string);
    virtual char makeMove() = 0;
    std::string _name;
    virtual std::string getName() = 0;
    ~Player(){};
};

#endif