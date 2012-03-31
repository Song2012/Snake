/*
 * =====================================================================================
 *
 *       Filename:  Food.cpp
 *
 *    Description:  :
 *
 *        Version:  1.0
 *        Created:  2012/3/31 ������ 16:14:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include "tool.h"
#include "Food.h"
#include <iostream>
using std::cout;
Food::Food(SnakeMap *map) {
	x = y = 0;
	food = '@';
	ate = true;
	this->map = map;
	srand(time(0));
}

void Food::createFood() {
	if(ate) {
		//Ϊ�˷�ֹʳ�������ͼ�����԰ѱ߽������޸�
		x = random(map->LB+1 , map->RB - 2);
		y = random(map->UB+1 , map->DB - 2);
		gotoPos(x,y);
		cout<<food;
		ate = false;
	}
}

