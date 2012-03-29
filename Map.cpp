/*
 * =====================================================================================
 *
 *       Filename:  Map.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/29 ÐÇÆÚËÄ 9:38:40
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include "Map.h"
#include <iostream>
using namespace std;

Map::Map() {
	for(int i = 0 ; i != M ; ++i) {
		for(int j = 0 ; j != N ; ++j) {
			if(i == 0 || i == M - 1 || j == 0 ||j == N - 1) {
				map[i][j] = "*";
			}

			else {
				map[i][j] = " "; 
			}
		}
	}

}

Map::~Map() {

}

void Map::print() {

	for(int i = 0 ; i != M ; ++i) {
		for(int j = 0 ; j != N ; ++j) {
			cout<<map[i][j]<<" ";
		}
		cout<<endl;
	}
}



