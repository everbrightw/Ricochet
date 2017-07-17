//
//  Map.cpp
//  Ricochet
//
//  Created by WANGYUSEN on 5/19/17.
//  Copyright © 2017 everbright. All rights reserved.
//

#include "Map.hpp"
#include <cmath>
Map::Map(int size){
    Square squares;
    for(size_t i = 0; i < pow(map_board.size(), 2); i++){
        map_board.push_back(squares);
    }
    length = size;
}

size_t Map::getLength(vector<Square> board){
    return board.size();
}

Square Map::getSquare(int x, int y){
    return map_board[x * length +y];
}
