#include "Rocket.h"
#include <iostream>
using namespace std;

Rocket::Rocket(int Symbol) : Tiles(Symbol){
}

void Rocket::pop(){
		cout << "Rocket Meluncur" << endl;
}