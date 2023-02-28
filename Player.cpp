#include "Player.h"


Player::Player(){}

Player::Player(std::string name){
    _name = name;
}

std::string Player::getName(){
    return _name;
}

Player::~Player(){}