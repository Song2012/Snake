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
using std::string;

class SnakeBody {
	public:
		SnakeBody(int x,int y,string body = "#");
		SnakeBody();
		string getBody();
	private:
		int x;
		int y;
		string body;
		SnakeBody *pres;
		SnakeBody *next;
};

class Snake {
	public:
		Snake();
		~Snake();
		void addHead(int x , int y
				, string body);
		void addHead(int x , int y);
		void delTail();
		void print();
		void move();
	private:
		SnakeBody *head;
		SnakeBody *tail;
		enum {U,D,L,R} point;
		void gotoPos(int x , int y);

};



#endif
