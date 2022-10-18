#include "Tiles.h"
#include "oTiles.h"
#include "Rocket.h"
#include "Bomb.h"
using namespace std;


int main(){
	
	Tiles* a[3][3];
	
	a[0][0] = new oTiles(1);
	a[0][1] = new oTiles(2);
	a[0][2] = new oTiles(3);
	a[1][0] = new Rocket(4);
	a[1][1] = new Rocket(4);
	a[1][2] = new Bomb(5);
	a[2][0] = new Bomb(5);
	a[2][1] = new oTiles(1);
	a[2][2] = new oTiles(2);

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			a[i][j]->pop();
		}
	}

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << a[i][j]->getSymbol() << " ";
		}
		cout << endl;
	}

return 0;
}
