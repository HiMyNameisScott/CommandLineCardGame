#ifndef BOARD_HPP
#define BOARD_HPP

class board{
    private:
    static const int SCREEN_X = 28;
    static const int SCREEN_Y = 80;
    char screen[SCREEN_X][SCREEN_Y];

    public:

    board();

    ~board();

    void placeItem(int x_loc, int y_loc, int x_dimension, int y_dimension);

    void drawScreen();

    void initScreen();

    void drawBoarder();
    
};

#endif