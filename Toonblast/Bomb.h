#pragma once
#include "Tiles.h"
#include <iostream>

using namespace std;

class Bomb : public Tiles{
    public:
		Bomb(int Symbol);
        void pop()override;
};