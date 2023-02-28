#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include "Player.h"

class Human:public Player{
    std::string name;
    Human();
    ~Human();
};

#endif