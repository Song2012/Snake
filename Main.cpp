/*
 * =====================================================================================
 *
 *       Filename:  Main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/27 ÐÇÆÚ¶þ 9:53:40
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include "Snake.h"
#include <conio.h>
int main(void) {
	SnakeMap *map = new SnakeMap();
	Food *food = new Food(map);
	map->print();
	char keydown;
	Snake *snake =  new Snake(map,food);
	snake->print();
	while(true) {
		if(snake->move()) {
			food->createFood();
			snake->print();
			Sleep(200);
			if(kbhit()) {
				keydown = getch();
				snake->changePoint(keydown);
			}
		}
		else {
			break;
		}

	}
	delete food;
	food = 0;
	delete snake;
	snake = 0;
	delete map;
	map = 0;
	system("PAUSE");
	return 0;
}

