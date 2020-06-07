#pragma once
#include"GameObject.h"
class Car:public GameObject {
public:
	Car();
	void display(int);
	void erase();
protected:
	int xpos;
	int ypos;
};