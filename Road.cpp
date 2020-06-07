#include"Road.h"
#include<iostream>
#include"rlutil.h"
using namespace std;

Road::Road() {
	xpos = 0;
	ypos = 0;
}

void Road::display(int color) {
#ifdef _WIN32
	for (ypos = 1; ypos < 21; ++ypos)
	{
		rlutil::locate(1, ypos);
		rlutil::setColor(rlutil::WHITE);
		cout << char(219);
		rlutil::locate(11,ypos);
		cout << char(219);
	}
	 rlutil::setBackgroundColor(rlutil::BLACK);
#else
	for (ypos = 1; ypos < 21; ++ypos)
	{
		rlutil::locate(1, ypos);
		rlutil::setColor(rlutil::WHITE);
		cout << "|";
		rlutil::locate(11, ypos);
		cout << "|";
	}
	rlutil::setBackgroundColor(rlutil::BLACK);
}
#endif
rlutil::resetColor();
}

void Road::erase() {
	for (ypos = 0; ypos < 20; ypos++) {
		for (xpos = 0; xpos < 11; xpos++) {
			cout << " ";
		}
	}
}