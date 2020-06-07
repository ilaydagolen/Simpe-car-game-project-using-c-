#include"Car.h"
#include<iostream>
#include"rlutil.h"
using namespace std;

Car::Car() {//default constructor
	xpos = 0;
	ypos = 0;
}

void Car::display(int color) {
#ifdef _WIN32
	if (ypos+1 <= 20) {
		rlutil::locate(xpos + 1, ypos + 1);
		rlutil::setColor(color);
		cout << char(254);
	}
	if (ypos+2 <= 20) {
		rlutil::locate(xpos, ypos + 2);
		rlutil::setColor(color);
		cout << char(195);
		rlutil::locate(xpos + 1, ypos + 2);
		rlutil::setColor(color);
		cout << char(254);
		rlutil::locate(xpos + 2, ypos + 2);
		rlutil::setColor(color);
		cout << char(180);
	}
	if (ypos+3 <= 20) {
		rlutil::locate(xpos, ypos + 3);
		rlutil::setColor(color);
		cout << char(195);
		rlutil::locate(xpos + 1, ypos + 3);
		rlutil::setColor(color);
		cout << char(254);
		rlutil::locate(xpos + 2, ypos + 3);
		rlutil::setColor(color);
		cout << char(180);
	}

#else
	if (ypos + 1 <= 20) {
		rlutil::locate(xpos + 1, ypos + 1);
		rlutil::setColor(color);
		cout << "_";
	}
	if (ypos + 2 <= 20) {
		rlutil::locate(xpos, ypos + 2);
		rlutil::setColor(color);
		cout << "H";
		rlutil::locate(xpos + 1, ypos + 2);
		rlutil::setColor(color);
		cout << "=";
		rlutil::locate(xpos + 2, ypos + 2);
		rlutil::setColor(color);
		cout << "H";
	}
	if (ypos + 3 <= 20) {
		rlutil::locate(xpos, ypos + 3);
		rlutil::setColor(color);
		cout << "H";
		rlutil::locate(xpos + 1, ypos + 3);
		rlutil::setColor(color);
		cout << "=";
		rlutil::locate(xpos + 2, ypos + 3);
		rlutil::setColor(color);
		cout << "H";
}

#endif

}

void Car::erase() {
	rlutil::locate(xpos + 1, ypos + 1);
	cout << " ";
	rlutil::locate(xpos, ypos + 2);
	cout << " ";
	rlutil::locate(xpos + 1, ypos + 2);
	cout << " ";
	rlutil::locate(xpos + 2, ypos + 2);
	cout << " ";
	rlutil::locate(xpos, ypos + 3);
	cout << " ";
	rlutil::locate(xpos + 1, ypos + 3);
	cout << " ";
	rlutil::locate(xpos + 2, ypos + 3);
	cout << " ";
}