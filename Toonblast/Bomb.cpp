#include "Header/Bomb.h"
#include <iostream>
using namespace std;

Bomb::Bomb(int Symbol) : Tiles(Symbol){
}

void Bomb::pop(){
		cout << "Bomb Menghilang" << endl;
}