#include"PlayerCar.h"
#include"EnemyCar.h"
#include<iostream>
#include"rlutil.h"
using namespace std;

PlayerCar::PlayerCar() {
	xpos = 2;
	ypos = 17;
}

void PlayerCar::moveLeftRight() {
	
	if (kbhit()) {
		int k = rlutil::getkey();
		erase();
		if (xpos <= 2 && k == rlutil::KEY_LEFT) { }
		if (xpos >= 2 && xpos < 8 && k == rlutil::KEY_RIGHT) {
			++xpos;
		}
		if (xpos >= 8 && k == rlutil::KEY_RIGHT) { }
		if(xpos <= 8 && xpos > 2 && k == rlutil::KEY_LEFT) {
			--xpos;
		}
		else
			return;
		display(4);
		cout.flush();
	}

	
}

void PlayerCar::checkCollusion(EnemyCar *enemy, bool *run) {
	int x_pos, y_pos;
	x_pos = enemy->getXpos();
	y_pos = enemy->getYpos();
	if (x_pos == xpos && y_pos > 14) {
		*run = false;
	}
	else if (x_pos == xpos + 2 && y_pos > 15) {
		*run = false;
	}
	else if (x_pos == xpos - 2 && y_pos > 15) {
		*run = false;
	}
	else if (x_pos == xpos + 1 && y_pos > 14) {
		*run = false;
	}
	else if (x_pos == xpos - 1 && y_pos > 14) {
		*run = false;
	}
}