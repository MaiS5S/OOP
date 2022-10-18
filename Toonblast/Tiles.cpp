#include "Tiles.h"
using namespace std;

Tiles::Tiles(int symbol){
	m_symbol = symbol;
}

void Tiles::setSymbol(int symbol){
	m_symbol = symbol;
}

int Tiles::getSymbol(){
	return m_symbol;
}