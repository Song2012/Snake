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
#include "tool.h"
#include "SnakeMap.h"
#include "Food.h"
#include <string>
#include <iostream>
using namespace std;

class SnakeBody {
	public:
		SnakeBody(int x,int y,string body = "#");
		SnakeBody();
		string getBody();
		SnakeBody* getPres();
		SnakeBody* getNext();
		void setPres(SnakeBody *pres);
		void setNext(SnakeBody *next);
		int getX();
		int getY();
		void setX(int x);
		void setY(int y);
	private:
		int x;
		int y;
		string body;
		SnakeBody *pres;
		SnakeBody *next;
};

class Snake {
	public:
		Snake(SnakeMap *map , Food *food);
		~Snake();
		void addHead(int x , int y
				, string body);
		void addHead(int x , int y);
		void delTail();
		void print();
		bool move();
		void changePoint(char key);
	private:
		SnakeBody *head;
		SnakeBody *tail;
		SnakeMap *map;
		Food *food;
		enum {U,D,L,R} point;
		inline void failed() {
			system("cls");
			cout<<"you are failed!"<<endl;
		}

};



#endif
