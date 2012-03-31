/*
 * =====================================================================================
 *
 *       Filename:  tool.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/31 星期六 16:26:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include "tool.h"

int random(int a , int b) {
	return (rand()%(b-a+1)) + a; 
}

void gotoPos(int x,int y) {
	HANDLE hOutput;  //定义一个句柄
	COORD loc;  //定义一个结构体，包含坐标X, Y
	loc.X = x;
	loc.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);  //得到标准输出设备的句柄
	SetConsoleCursorPosition(hOutput, loc);  //设置控制台的光标坐标为loc
}
