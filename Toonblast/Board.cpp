#include "Header/Board.h"
using namespace std;

Board::Board(int _w, int _h){
    this->width = _w;
    this->height = _h;
}

int Board::getHeight(){
    return height;
}

int Board::getWidth(){
    return width;
}