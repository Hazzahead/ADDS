#include "Human.h"
#include <iostream>

Human::Human(std::string name){
    _name = "Human";
}

char Human::makeMove(){
    char move;
    std::cout << "Enter move: ";
    std::cin >> move;
    return toupper(move);
}