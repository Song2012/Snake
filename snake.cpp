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
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;
const int m = 20;
const int n = 20;
vector<vector<string>> game;

typedef struct snake {
	int x,y;
	struct snake *pres;
	struct snake *next;
}snake;

struct snake *head;
struct snake *tail;

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
	}
	else {
		snake *p = tail;
		tail = tail->pres;
		tail->next = NULL;
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

void initSnake() {
	for(snake *p = head ; p != NULL ; p = p->next) {
		game[p->x][p->y] = "#";
	}
}

void draw() {
	for(int i = 0 ; i != m ; ++i) {
		for(int j = 0 ; j != n ; ++j){
			cout<<game[i][j]<<" ";
		}
		cout<<endl;
	}
}

void output() {
	initMap();
	initSnake();
	draw();
}



int main(void) {
	head = tail = NULL;	
	add_head(4,5);
	add_head(5,6);
	add_head(7,6);
	output();
	del_tail();
	output();

}
