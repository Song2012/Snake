/*
 * =====================================================================================
 *
 *       Filename:  Main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/27 ���ڶ� 9:53:40
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <Windows.h>
using namespace std;
const int m = 20;
const int n = 20;
enum {U,D,L,R} point; 
vector<vector<string>> game;

typedef struct snake {
	int x,y;
	struct snake *pres;
	struct snake *next;
}snake;

struct snake *head;
struct snake *tail;

void gotoXY(int x, int y)     //������ƶ���x,y���괦,��������ֱ�Ӵ�ӡ�Ͳ�������
{
	HANDLE hOutput;  //����һ�����
	COORD loc;  //����һ���ṹ�壬��������X, Y
	loc.X = y;
	loc.Y = x;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);  //�õ���׼����豸�ľ��
	SetConsoleCursorPosition(hOutput, loc);  //���ÿ���̨�Ĺ������Ϊloc
}

void add_head(int a,int b) {
	struct snake *s = new snake();
	s->x = a;
	s->y = b;
	//game[s->x][s->y] = "#";
	if(head == NULL) {
		s->pres = NULL;
		s->next = NULL;
		head = s;
		tail = s;


	}
	else {
		//snake *tmp = head;
		s->next = head;
		s->pres = NULL;
		head->pres = s;
		head = s;
	}
}

void del_tail() {
	assert(tail != NULL);
	if(head == tail) {
		head = tail = NULL;
		gotoXY(head->x , head->y);
		cout<<" ";
	}
	else {
		snake *p = tail;
		tail = tail->pres;
		tail->next = NULL;
		gotoXY(p->x,p->y);
		cout<<" ";
		delete p;
	}

}


void initMap() {
	for(int i = 0 ; i != m ; ++i) {
		game.push_back(vector<string>(n));
		for(int j = 0 ; j != n ; ++j) {
			if(i == 0 || i == m - 1 || j == 0 || j == n - 1) {
				game[i][j] = "*";	
			}
			else {
				game[i][j] = " ";
			}
		}
	}
}



void move() {
	int ix = head->x;
	int iy = head->y;
	switch(point) {
		case U:
			--ix;
			break;
		case D:
			++ix;
			break;
		case L:
			--iy;
			break;
		case R:
			++iy;
			break;
		default:
			break;
	}
	add_head(ix,iy);
	del_tail();
}

void drawMap() {
	initMap();
	for(int i = 0 ; i != m ; ++i) {
		for(int j = 0 ; j != n ; ++j){
			cout<<game[i][j]<<" ";
		}
		cout<<endl;
	}
}

void drawSnake() {
	for(snake *p = head ; p != NULL ; p = p->next) {
		gotoXY(p->x, p->y);
		cout<<"#";
	}

}

void init() {
	head = tail = NULL;	
	add_head(4,5);
	add_head(4,6);
	add_head(4,7);
	point = R;
	drawMap();
}



int main(void) {
	init();
	while(true) {
		move();
		drawSnake();
		Sleep(300);
	}
}

