/*
 * =====================================================================================
 *
 *       Filename:  tool.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/31 ������ 16:26:55
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
	HANDLE hOutput;  //����һ�����
	COORD loc;  //����һ���ṹ�壬��������X, Y
	loc.X = x;
	loc.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);  //�õ���׼����豸�ľ��
	SetConsoleCursorPosition(hOutput, loc);  //���ÿ���̨�Ĺ������Ϊloc
}
