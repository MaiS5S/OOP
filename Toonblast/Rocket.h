#pragma once
#include "Tiles.h"
#include <iostream>

using namespace std;

class Rocket : public Tiles{
    public:
		Rocket(int Symbol);
	    void pop()override;
};