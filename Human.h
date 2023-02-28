#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include "Player.h"

class Human:public Player{
    public:
    Human(std::string name);
    char makeMove() override;
    std::string getName() override;
    ~Human(){};
};

#endif