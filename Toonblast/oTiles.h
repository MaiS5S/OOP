#pragma once
#include "Tiles.h"
#include <iostream>

using namespace std;
class oTiles : public Tiles{
	  public:
		oTiles(int symbol);
        void pop()override;
};