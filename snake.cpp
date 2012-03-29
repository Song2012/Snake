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
SnakeBody::SnakeBody(int x,int y,string body) {
	this->x = x;
	this->y = y;
	this->body = body;
}

SnakeBody::SnakeBody() {
	x = 0;
	y = 0;
	body = NULL;
}

Snake::Snake() {
	head = tail = NULL;
}

Snake::~Snake() {
	delete tail;
	delete head;
}

Snake::addHead(int x,int y,string body) {
	
}


