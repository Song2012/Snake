/*
 * =====================================================================================
 *
 *       Filename:  Map.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/29 ÐÇÆÚËÄ 9:36:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef __MAP_H__
#define __MAP_H__
#include <string>
using std::string;
#define M 20
#define N 20
class Map {

	public:
		Map();
		~Map();
		void print();
	private:
		string map[M][N];
};
#endif


