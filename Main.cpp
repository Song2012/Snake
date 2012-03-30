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
#include "SnakeMap.h"
#include <conio.h>
int main(void) {
	SnakeMap *map = new SnakeMap();
	map->print();
	char keydown;
	Snake *snake =  new Snake(map);
	snake->print();
	while(true) {
		if(snake->move()) {
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
	delete snake;
	snake = 0;
	delete map;
	map = 0;
	system("PAUSE");
	return 0;
}

