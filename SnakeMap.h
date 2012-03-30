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

#ifndef __S_MAP_H__
#define __S_MAP_H__
#include <string>
using std::string;
#define M 20
#define N 20
class SnakeMap {

	public:
		SnakeMap();
		~SnakeMap();
		void print();
		// left border
		static const size_t LB = 0;
		// right border
		static const size_t RB = N*2 - 2;
		// upper border
		static const size_t UB = 0; 
		// nether border
		static const size_t DB = M;
	private:
		string map[M][N];
};
#endif


