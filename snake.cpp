/*
 * =====================================================================================
 *
 *       Filename:  snake.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/24 ÐÇÆÚÁù 15:58:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include "Snake.h"
#include <iostream>
using std::string;
using std::cout;

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

SnakeBody* SnakeBody::getPres() {
	return pres;
}

SnakeBody* SnakeBody::getNext() {
	return next;
}

void SnakeBody::setPres(SnakeBody *pres) {
	this->pres = pres;
}

void SnakeBody::setNext(SnakeBody *next) {
	this->next = next;
}

int SnakeBody::getX() {
	return x;
}

int SnakeBody::getY() {
	return y;
}

void SnakeBody::setX(int x) {
	this->x = x;
}

void SnakeBody::setY(int y) {
	this->y = y;
}


Snake::Snake(SnakeMap *map , Food *food) {
	head = tail = NULL;
	addHead(4,5);
	addHead(4,6);
	addHead(4,7);
	point = R;
	this->map = map;
	this->food = food;
}

Snake::~Snake() {
	delete tail;
	delete head;
}

void Snake::addHead(int x,int y,string body) {
	SnakeBody *newbody = new SnakeBody(x,y,body); 
	if(head == NULL) {
		head = tail = newbody;
		head->setPres(NULL);
		head->setNext(NULL);
	}
	else {
		head->setPres(newbody);
		newbody->setNext(head);
		head = newbody;
	}
}



void Snake::addHead(int x , int y) {
	SnakeBody *newbody = new SnakeBody(x,y);
	if(head == NULL) {
		head = tail = newbody;
		head->setPres(NULL);
		head->setNext(NULL);
	}
	else {
		head->setPres(newbody);
		newbody->setNext(head);
		head = newbody;
	}

}

void Snake::delTail() {
	SnakeBody *p = tail;
	gotoPos(tail->getX() , tail->getY());
	cout<<" ";
	tail = tail->getPres();
	tail->setNext(NULL);
	delete p;
	p = 0;
}

void Snake::print() {
	for(SnakeBody *p = head ; p != NULL ; p = p->getNext()) {
		gotoPos(p->getX() , p->getY());
		cout<<p->getBody();
	}
}

bool Snake::move() {
	int x = head->getX();
	int y = head->getY();
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
	if(x == map->RB || x == map->LB || y == map->UB || y == map->DB) {
		failed();
		return false;
	}
	else if(x == food->getX() && y == food->getY()) {

		addHead(x,y);
		food->setAte(true);
		return true;
	}
	else {
		addHead(x,y);
		delTail();
		return true;
	}

}

void Snake::changePoint(char key) {
	switch(key) {
		case 'k': case 'K':
			point = U;
			break;
		case 'j': case 'J':
			point = D;
			break;
		case 'h': case 'H':
			point = L;
			break;
		case 'L': case 'l':
			point = R;
			break;
		default:
			break;		
	}
}
