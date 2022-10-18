#include "oTiles.h"
#include "Tiles.h"
#include <iostream>
using namespace std;

oTiles::oTiles(int symbol) : Tiles(symbol){
}

void oTiles::pop(){
	cout << "Tile Menghilang" << endl;
}