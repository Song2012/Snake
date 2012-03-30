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
#include "Map.h"
#include "Snake.h"
int main(void) {
	Map *map = new Map();
	map->print();
	Snake *snake =  new Snake();
	while(true) {
		snake->move();
		snake->print();		
	}
	delete map;
	map = 0;
}

