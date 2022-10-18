#pragma once
#include <string>
#include <iostream>

using namespace std;

class Tiles{
    private:
		int m_symbol;
    public:
		Tiles(int symbol);
        virtual void pop()=0;
		void setSymbol(int symbol);
		int getSymbol();
};