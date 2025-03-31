#include "game.h"

//initialize Player instance inside game
Player* player = new Player(2, 3);

//printing world (X,Y)
void Game::printWorld_xy(){
    for(int i = 0; i < this->x; i++){
        printf("\t      ");
        for(int j = 0; j < this->y; j++){
            if(i == player->get_postionX() && j == player->get_postionY()) cout << " P ";
            else cout << " * ";
        }
        printf("\n");
    }
}

//printing world (Y,Z)
void Game::printWorld_yz(){
    for(int i = 0; i < this->z; i++){
        printf("\t      ");
        for(int j = 0; j < this->y; j++){
            cout << " * ";
        }
        printf("\n");
    }
}

//print player pos
void Game::printPlayerPos(){
    cout << "\n\t\t   (" << player->get_postionX() << "|" << player->get_postionY() << ")" << endl;
}

//to do
/*
void Player::input(){
    char input;
    cin >> input;
    switch (input) {
            case 'w': if (y > 0) this->y--; break;
            case 's': if (y < 4) this->y++; break;
            case 'a': if (x > 0) this->x--; break;
            case 'd': if (x < 9) this->x++; break;
            default : cout << "invalid input";
    }
}
*/
