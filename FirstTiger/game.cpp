#include <iostream>
#include "game.h"

using namespace std;

game::game(){}
game::~game(){}


void game::init() {
	cout << "Game started" << endl;
}

void game::update() {
	cout << "Game is on" << endl;
}

void game::terminate() {
	cout << "Game over" << endl;

}