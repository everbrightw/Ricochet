//
//  Map.hpp
//  Ricochet
//
//  Created by WANGYUSEN on 5/19/17.
//  Copyright © 2017 everbright. All rights reserved.
//

#ifndef Map_hpp
#define Map_hpp
#include <iostream>
#include <vector>
#include <stdio.h>

#include "Square.hpp"
using namespace std;

class Map{
private:
    vector<Square> map_board;
    int length;
public:
    Map(int size);
    size_t getLength(vector<Square> board);
    Square getSquare(int x, int y);
        
    
    
};
#endif /* Map_hpp */
