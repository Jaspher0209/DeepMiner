#include <iostream>

#include "game.h"

int main()
{
    //create new Game instance
    Game* newGame = new Game();

    //printing
    newGame->printWorld_xy();
    newGame->printPlayerPos();

    return 0;
}
