/*
 * Coupon.h
 *
 *  Created on: Oct 11, 2018
 *      Author: can
 */

#ifndef COUPON_H_
#define COUPON_H_
#include <vector>
#include "SelectedGame.h"

class Coupon {
private:
	std::vector<SelectedGame> selectedGames;
	float betAmount;

public:
	Coupon();
	~Coupon();
};

#endif /* COUPON_H_ */
