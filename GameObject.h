#pragma once
#include"rlutil.h"
#include <stdlib.h> 
#include <stdio.h>
#include <algorithm>
#include <time.h>
#include <math.h>
class GameObject {//we dont need a cpp file all functions included are pure virtual functions
public:
	virtual void display(int) = 0;
	virtual void erase() = 0;
};