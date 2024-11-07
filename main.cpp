#include <iostream>
#include <iomanip>
#include "board.hpp"

int main(){

    board game_board;
    game_board.initScreen();

    std::cout << "Hello! World!" << std::endl;

    game_board.drawScreen();



    return 0;
}


//  ______________________________________________________________________________
// | 35/35                                                                        |
// |                                                                              |
// |      |   |                                                                   |
// |      | A |                                                                   |
// |      |___|                                                                   |
// |                                                                              |
// |                                                                              |
// |                                                                              | 
// |                                                                              |
// |                                                                              |
// |                                                                              |
// |                                                                              |
// |                                                                              |
// |                                                                              |
// |______________________________________________________________________________|