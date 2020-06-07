#include"GameObject.h"
#include"Car.h"
#include"Road.h"
#include"PlayerCar.h"
#include"EnemyCar.h"
#include<iostream>
#include"rlutil.h"
using namespace std;

int main() {
	rlutil::hidecursor();
	rlutil::setColor(5);
	cout << "Welcome to Ece & Ilayda's Car Game!"<<endl;
	rlutil::setColor(3);
	cout << "Use left [<-] and right [->] keys to play." << endl;
	rlutil::setColor(2);
	cout << "Press [Enter] TO START.";
	cin.get();

	srand(time(NULL));

	GameObject *objects[3];
	objects[0] = new PlayerCar();
	objects[1] = new EnemyCar();
	objects[2] = new Road();
	bool run = true;
	while (run) {
		rlutil::cls();
		((EnemyCar*)objects[1])->decideSide();
		((EnemyCar*)objects[1])->display(11);
		((EnemyCar*)objects[1])->upDownSlide();

		((PlayerCar*)objects[0])->moveLeftRight();
		((PlayerCar*)objects[0])->display(4);
		((PlayerCar*)objects[0])->checkCollusion(&*(EnemyCar*)objects[1], &run);

		((Road*)objects[2])->display(15);
		cout.flush();
		rlutil::msleep(50);
	}

	rlutil::msleep(1000);
	rlutil::cls();

	gotoxy(5, 4);
	cout << "GAME OVER!";
	gotoxy(5, 5);
	cout << "SCORE: " << ((EnemyCar*)objects[1])->getScore() << endl;

	rlutil::showcursor();
	return 0;
}