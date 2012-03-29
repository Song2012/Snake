/*
 * =====================================================================================
 *
 *       Filename:  Snake.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/26 ÐÇÆÚÒ» 23:18:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */
#ifndef __SNAKE_H__
#define __SNAKE_H__
#include <string>

class SnakeBody {
	public:
		SnakeBody(int x,int y,string body = "#");
		SnakeBody();
	private:
		int x;
		int y;
		string body;
};

class Snake {
	public:
		Snake();
		~Snake();
		addHead(int x , int y , string body);
		addHead(int x , int y);
		delTail();
		print();
	private:
		SnakeBody *head;
		SnakeBody *tail;
		enum {U,D,L,R} point;
		void gotoPos(int x , int y);

};



#endif
