#include "Player.h"

Player::Player(std::string name){
    _name = name;
}

char Player::makeMove(){}

std::string Player::getName(){
    return _name;
}

Player::~Player(){}