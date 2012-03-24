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
using namespace std;
const int m = 20;
const int n = 20;
vector<vector<string>> game;

typedef struct snake {
	int x,y;
	struct snake *pres;
	struct snake *next;
}snake;

snake *head;
snake *tail;

void add_head(int a,int b) {
	snake s;
	s.x = a;
	s.y = b;
	snake *p = &s;
	if(head == NULL) {
		p->pres = NULL;
		p->next = NULL;
		head = p;
		tail = p;


	}
	else {
		snake *tmp = head;
		head = p;
		head->pres = NULL;
		head->next = tmp;
		tmp->pres = head;
	}
}


void init() {
	head = tail = NULL;
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

void output() {
	for(int i = 0 ; i != m ; ++i) {
		for(int j = 0 ; j != n ; ++j){
			cout<<game[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(void) {
	init();
	output();

}
