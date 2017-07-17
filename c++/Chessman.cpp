//
//  Chessman.cpp
//  Ricochet
//
//  Created by WANGYUSEN on 5/19/17.
//  Copyright © 2017 everbright. All rights reserved.
//

#include "Chessman.hpp"
/*Chessman::Chessman(){
    Map ricochet_map(18);
}*/
int Chessman::getCurrX_position(){
    return currY_postition;
}
int Chessman::getCurrY_position(){
    return currY_postition;
}

void Chessman::setColor(string new_color){
    chesscolor = new_color;
}
string Chessman::getColor(){
    return chesscolor;
}
void Chessman::setCurrX_position(int new_x){
    currX_position = new_x;
}
void Chessman::setCurrY_position(int new_y){
    currY_postition = new_y;
}

bool Chessman::can_move_up(){
    if(ricochet_map.getSquare(currX_position, currY_postition).canTravel(0)){
        return true;
    }
}
