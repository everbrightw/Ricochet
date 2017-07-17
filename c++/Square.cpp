//
//  Square.cpp
//  Ricochet
//
//  Created by WANGYUSEN on 5/19/17.
//  Copyright © 2017 everbright. All rights reserved.
//

#include "Square.hpp"

Square::Square(){
    up_wall = false;
    down_wall = false;
    left_wall = false;
    right_wall = false;
  
}
int Square::getCurrX_loc(){
    return currX_loc;
}
int Square::getCurrY_loc(){
    return currY_loc;
}
void Square::setUp_wall(bool wall_state){
    up_wall = wall_state;
}
void Square::setDown_wall(bool wall_state){
    down_wall = wall_state;
}
void Square::setLeft_wall(bool wall_state){
    left_wall = wall_state;
}
void Square::setRight_wall(bool wall_state){
    right_wall = wall_state;
}

bool Square::canTravel(int direction){
    // travel up
    if(direction == 0){
        if(up_wall){
            return false;
        }
        else{
            return true;
        }
    }
    //test travel down
    if(direction == 1){
        if(down_wall){
            return false;
        }
        else{
            return true;
        }
    }
    //test travel left
    if(direction == 2){
        if(left_wall){
            return false;
        }
        else{
            return true;
        }
    }
    //test travel right
    if(direction == 3){
        if(right_wall){
            return false;
        }
        else{
            return true;
        }
        
    }
    return false;
}













