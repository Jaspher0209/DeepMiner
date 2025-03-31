#ifndef GAME_H
#define GAME_H

#include <iostream>
using namespace std;


//Game Class
class Game{
private:
    int x;
    int y;
    int z;

public:
    //constructor
    Game(){
        this-> x = 5;
        this-> y = 5;
        this-> z = 9;

        cout << "\t== Welcome to DeepMiner! ==\n" << endl;
    }

    //print world
    void printWorld_xy();
    void printWorld_yz();
    void printPlayerPos();
};

//Player Class
class Player{
private:
    int x;
    int y;
public:
    Player(int x, int y){
        this->x = x;
        this->y = y;
    }

    //to-do..
    //void input();

    //getter
    int get_postionX(){
        return this->x;
    }

    int get_postionY(){
        return this->y;
    }
};

#endif // GAME_H
