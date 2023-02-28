#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"

int main(){

    Referee r1;
    Human h1("Greg");
    Computer c1;
    
    r1.refGame(&h1,&c1);

    return 0;
    
}