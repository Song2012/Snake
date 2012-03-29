/*
 * =====================================================================================
 *
 *       Filename:  snake.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/24 星期六 15:58:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include "Snake.h"
#include <string>
using std::string;

SnakeBody::SnakeBody(int x,int y,string body) {
	this->x = x;
	this->y = y;
	this->body = body;
}

SnakeBody::SnakeBody() {
	x = 0;
	y = 0;
	body = " ";
}
string SnakeBody::getBody() {
	return body;
}

Snake::Snake() {
	head = tail = NULL;
	addHead(4,5);
	addHead(4,6);
	addHead(4,7);
	point = R;
}

Snake::~Snake() {
	delete tail;
	delete head;
}

void Snake::addHead(int x,int y,string body) {
	SnakeBody *newbody = new SnakeBody(x,y,body); 
	if(head == NULL) {
		head = tail = newbody;
		head->pres = NULL;
		tail->next = NULL;
	}
	else {
		head->pres = newbody;
		newbody->next = head;
		head = newbody;
	}
}



void Snake::addHead(int x , int y) {
	SnakeBody *newbody = new SnakeBody(x,y);
	if(head == NULL) {
		head = tail = newbody;
	}
	else {
		head->pres = newbody;
		newbody->next = head;
		head = newbody;
	}

}

void Snake::delTail() {
	SnakeBody *p = tail;
	tail = tail->pres;
	tail->next = NULL;
	delete p;
	p = 0;
}

void Snake::gotoPos(int x,int y) {
	HANDLE hOutput;  //定义一个句柄
	COORD loc;  //定义一个结构体，包含坐标X, Y
	loc.X = x;
	loc.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);  //得到标准输出设备的句柄
	SetConsoleCursorPosition(hOutput, loc);  //设置控制台的光标坐标为loc
}


void Snake::print() {
	for(SnakeBody *p = tail ; p != NULL ; ++p) {
		gotoPos(p->x , p->y);
		cout<<p->getBody();
	}
}

void Snake::move() {
	int x = head->x;
	int y = head->y;
	switch(point) {
		case U:
			--y;
			break;
		case D:
			++y;
			break;
		case L:
			--x;
			break;
		case R:
			++x;
			break;
		default:
				break;

	}
	addHead(x,y);
	delTail();
}
