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

class Map {

	public:
		Map();
		~Map();
		print();
	private:
		const size_t M = 20;
		const size_t N = 20;
		string map[M][N];
}


