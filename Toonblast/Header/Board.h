#pragma once
#include "Tiles.h"
#include <iostream>

class Board{
    public:
        Board(int _width, int _height);
        Tiles *getTile(int x, int y);
        void setTile(int x, int y, Tiles *tile);

        int getWidth();
        int getHeight();

        void printBoard();
        void initBoard();

    private:
        int width;
        int height;
        Tiles** tiles;
};