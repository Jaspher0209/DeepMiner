#include <iostream>

#include "game.h"
#include "robot.h"

#define X 5
#define Y 5

using namespace std;

int main()
{
    Game game;
    Robot robot;

    int x, y;
    game.showWorld(X, Y, robot.get_x(), robot.get_y());


    while(1){
        robot.moveBot();
        game.showWorld(X, Y, robot.get_x(), robot.get_y());
        robot.mine(game, robot);

        cin >> x;
        cin >> y;


        game.getEbeneVal(x, y);

        cout << "Bot Punkte: " << robot.get_points() << endl;


    }
    return 0;
}
