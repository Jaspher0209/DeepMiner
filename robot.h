#ifndef ROBOT_H
#define ROBOT_H

//basis klasse
class Robot{
private:
    int x, y, z;        //z: 9 - 0 :: HIGH - GROUND
    int points;
public:
    Robot(){
        this->x = 0;
        this->y = 0;
        this->z = 0;
        this->points = 0;
    }

    ~Robot(){
        std::cout << "Robot destroyed" << std::endl;
    }

    //methodes
    void moveBot();
    void mine(Game& game, Robot& bot);

    //getter
    int get_x(){
        return this->x;
    }
    int get_y(){
        return this->y;
    }
    int get_z(){
        return this->z;
    }
    int get_points(){
        return this->points;
    }
};

//to do..

#endif // ROBOT_H
