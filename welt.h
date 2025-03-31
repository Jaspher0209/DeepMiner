#ifndef WELT_H
#define WELT_H

#include <iostream>

using namespace std;
class Playground{
private:
    int x;
    int y;
    int z;
public:
    //constructor
    Playground(){
        this-> x = 5;
        this-> y = 5;
        this-> z = 9;

        cout << "\t== Welcome to DeepMiner! ==\n" << endl;
    }

    //print world
    void printWorld_yz();
    void printWorld_xy();
};

#endif
