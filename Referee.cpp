#include "Referee.h"
#include <iostream>

Player* Referee::refGame(Player* player1, Player* player2){
    char player1choice = player1->makeMove();
    char player2choice = player2->makeMove();

    if(player1choice==player2choice){
        return nullptr;
    }
    else if((player1choice=='P' && player2choice=='R') 
            || (player1choice=='R' && player2choice=='S') 
            || (player1choice=='S' && player2choice=='P')){
                std::cout << player1->getName() << " wins" << std::endl;
        return player1;
    }
    else{
        std::cout << player2->getName() << " wins" << std::endl;
        return player2;
    }
}

Referee::~Referee(){}
