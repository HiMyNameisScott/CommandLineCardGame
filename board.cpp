#include <iostream>
#include "board.hpp"

board::board()
{
    initScreen();
};

board::~board() {

};

void board::placeItem(int x_loc, int y_loc, int x_dimension, int y_dimension) {
    
};

void board::drawScreen()
{
    for (int i = 0; i < SCREEN_X; i++)
    {
        for (int j = 0; j < SCREEN_Y; j++)
        {
            std::cout << screen[i][j];
        }
        std::cout << '\n';
    }
};

void board::drawBoarder()
{
    for (int i = 0; i < SCREEN_X; i++)
    {
        screen[0][i] = '|';
    }
};

void board::initScreen()
{
    for (int i = 0; i < SCREEN_X; i++)
    {
        for (int j = 0; j < SCREEN_Y; j++)
        {
            screen[i][j] = 'x';
        }
    }
};
