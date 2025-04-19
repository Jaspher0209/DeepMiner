#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

#define ZEILE 5
#define SPALTE 9

//Game Class
class Game{
private:
    std::array<std::array<int, SPALTE>, ZEILE> ebene;
public:
    //constructor
    Game(){
        srand(time(0));  // Nur einmal pro Programmstart

        for(int i=0; i < SPALTE; i++){
            for(int j=0; j < ZEILE; j++){
                ebene[i][j] = rand() % 10;  // Höhen von 0 bis 9
            }
        }
        std::cout << "\t== Welcome to DeepMiner! ==\n" << std::endl;
    }

    ~Game(){
        std::cout << "Game Closed" << std::endl;
    }

    //methods
    void showWorld(int x, int y, int botposX, int botposY);
    void removeBlock(int botposX, int botposY);
    void getEbeneVal(int x, int y);

    //array getter
    const std::array<std::array<int, SPALTE>, ZEILE>& getEbene() const {
        return ebene;
    }

};

#endif // GAME_H
