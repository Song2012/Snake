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

void init() {
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
