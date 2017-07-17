//
//  Square.hpp
//  Ricochet
//
//  Created by WANGYUSEN on 5/19/17.
//  Copyright © 2017 everbright. All rights reserved.
//

#ifndef Square_hpp
#define Square_hpp
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
class Square{
private:
    int currX_loc;
    int currY_loc;
    bool up_wall;
    bool down_wall;
    bool right_wall;
    bool left_wall;
public:
    Square();
    int getCurrX_loc();
    
    int getCurrY_loc();
    
    void setDown_wall(bool wall_state);
    
    void setUp_wall(bool wall_state);
    
    void setLeft_wall(bool wall_state);
    
    void setRight_wall(bool wall_state);
    
    bool canTravel(int direction); // 0 = up  1 = down 2 = left 3 = right
    
};
#endif /* Square_hpp */
