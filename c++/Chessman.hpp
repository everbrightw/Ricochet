//
//  Chessman.hpp
//  Ricochet
//
//  Created by WANGYUSEN on 5/19/17.
//  Copyright © 2017 everbright. All rights reserved.
//

#ifndef Chessman_hpp
#define Chessman_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Map.hpp"
using namespace std;
class Chessman{
    
private:
    int currX_position;// current x position
    int currY_postition;//current y position
    string chesscolor; /* current chess color
                     blue red green yellow silver
                                                */
    Map ricochet_map;

public:
    Chessman();//constructor
    int getCurrX_position();// get x position
    
    void setCurrX_position(int new_x);// set x position
    
    int getCurrY_position(); // get y position
    
    void setCurrY_position(int new_y); // set y position
    
    string getColor(); // get chessman color
    
    void setColor(string new_color);//set new_color
    void move_left();// let the chessman move left
    void move_right();//let the chessman move right
    void can_move_up();// let the chessman move up
    void move_down();// let the chessman move down
    
};

#endif /* Chessman_hpp */
