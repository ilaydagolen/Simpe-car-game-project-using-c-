#pragma once
#include"GameObject.h"
class Road:public GameObject {
public:
	Road();
	void display(int);
	void erase();
private:
	int xpos;
	int ypos;
};
