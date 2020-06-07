#pragma once
#include"Car.h"
class EnemyCar;//forward declaration
class PlayerCar :public Car {
public:
	PlayerCar();
	void moveLeftRight();
	void checkCollusion(EnemyCar *enemy, bool *run);
};