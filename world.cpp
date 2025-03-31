#include "welt.h"


void Playground::printWorld_yz(){
    for(int i = 0; i < this->z; i++){
        printf("\t      ");
        for(int j = 0; j < this->y; j++){
            cout << " * ";
        }
        printf("\n");
    }
}

void Playground::printWorld_xy(){
    for(int i = 0; i < this->x; i++){
        printf("\t      ");
        for(int j = 0; j < this->y; j++){
            cout << " * ";
        }
        printf("\n");
    }
}
