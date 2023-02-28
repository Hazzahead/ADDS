#include "Computer.h"

Computer::Computer(){
    _name = "Computer";
}

std::string Computer::getName(){
    return _name;
}

char Computer::makeMove(){
    return 'R';
}