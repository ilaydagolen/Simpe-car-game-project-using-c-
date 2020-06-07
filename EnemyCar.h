#pragma once
#include"Car.h"
class EnemyCar :public Car {
public:
	EnemyCar();
	void decideSide();
	void upDownSlide();
	int getScore();
	int getXpos();
	int getYpos();
private:
	int score;
};