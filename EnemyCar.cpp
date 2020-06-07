#include"EnemyCar.h"
#include<iostream>
#include"rlutil.h"
using namespace std;

EnemyCar::EnemyCar() {
	xpos = 2;
	ypos = -2;
	score = 0;
}

void EnemyCar::decideSide() {
	if (ypos == 20) {
		int randpos = rand() % 6 + 2;
		xpos = randpos;
		ypos = -2;
		score += 100;
	}
}

void EnemyCar::upDownSlide() {
	ypos++;
}

int EnemyCar::getScore() {
	return(score);
}

int EnemyCar::getXpos() {
	return (xpos);
}

int EnemyCar::getYpos() {
	return (ypos);
}
