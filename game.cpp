#include "game.h"
#include "robot.h"
#include <iostream>
#include <string>

using namespace std;

//output world to console
void Game::showWorld(int x, int y, int botposX, int botposY){
    for(int i=0; i < y; i++){
        for(int j=0; j < x; j++){

            if(botposY == i && botposX == j){
                cout << " * ";
            } else{
                switch(ebene[j][i]){            //reviews the value inside array[j][i]
                case 9:                         //on specific field
                    cout << " 9 ";
                    break;
                case 8:
                    cout << " 8 ";
                    break;
                case 7:
                    cout << " 7 ";
                    break;
                case 6:
                    cout << " 6 ";
                    break;
                case 5:
                    cout << " 5 ";
                    break;
                case 4:
                    cout << " 4 ";
                    break;
                case 3:
                    cout << " 3 ";
                    break;
                case 2:
                    cout << " 2 ";
                    break;
                case 1:
                    cout << " 1 ";
                    break;
                case 0:
                    cout << " 0 ";
                    break;
                default:
                    cout << " ? ";
                    break;
                }
            }
        }
        printf("\n");
    }
}

//block abbauen
void Game::removeBlock(int botposX, int botposY){
    ebene[botposX][botposY]--;
    if(ebene[botposX][botposY] <= 0){
        ebene[botposX][botposY] = 0;
    }
}

//check for field
void Game::getEbeneVal(int x, int y){
    cout << "Feld[ " << x << "|" << y << "]: " <<  ebene[x][y] << endl;
}

//moving robot
void Robot::moveBot(){
    char input;

    cout << "Up, Left, Down, Right, Stand still? (w/a/s/d/x): ";
    cin >> input;
    switch(input){
    case 'w':
        //up
        (y <= 0) ? y = 0 : y--;
        cout << "Moved: UP" << endl;
        break;
    case 'a':
        //left
        (x <= 0) ? x = 0 : x--;
        cout << "Moved: LEFT" << endl;
        break;
    case 's':
        //down
        (y >= 4) ? y = 4 : y++;
        cout << "Moved: DOWN" << endl;
        break;
    case 'd':
        (x >= 4) ? x = 4 : x++;
        cout << "Moved: RIGHT" << endl;
        break;
    case 'x':
        cout << "STAND STILL" << endl;
        break;
    default:
        cout << "Invalid input" << endl;
    }
}

//feld abbauen
void Robot::mine(Game& game, Robot& bot){
    char input;
    cout << "Willst du abbauen? (y/n): " ;
    cin >> input;
    if(input == 'y'){
        game.removeBlock(bot.get_x(), bot.get_y());
        this->points++;
        cout << "MINED!" << endl;
    } else {
        cout << "NOT MINED!" << endl;
    }
}
