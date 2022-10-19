#pragma once
#include "Tiles.h"
#include <iostream>

class Board{
    private:
        int width;
        int height;
        Tiles** tiles;
    public:
        Board(int _w, int _h);
        Tiles *getTile(int x, int y);
        void setTile(int x, int y, Tiles *tile);

        int getWidth();
        int getHeight();

        bool canPopTile();

        void printBoard();
        void initBoard();
        void updateBoard();
        void popTile();
};