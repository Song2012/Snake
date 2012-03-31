/*
 * =====================================================================================
 *
 *       Filename:  Food.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/3/31 ĞÇÆÚÁù 16:14:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Python (), 
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef __S_FOOD_H__
#define __S_FOOD_H__

#include "SnakeMap.h"

class Food {
	public:
	Food(SnakeMap *map);
	void createFood();
	inline void setAte(bool ate) {
		this->ate = ate;
	}

	inline int getX() {
		return x;
	}

	inline int getY() {
		return y;
	}

	private:
		int x;
		int y;
		char food;
		SnakeMap *map;
		bool ate;
};
#endif
