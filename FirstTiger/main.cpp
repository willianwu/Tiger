#include <iostream>
#include "game.h"


using namespace std;



int main() {
	game* game1 = new game();
	game1->init();

	game game2;
	game2.update();

}