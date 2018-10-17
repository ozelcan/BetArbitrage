/*
 * Bulletin.h
 *
 *  Created on: Oct 11, 2018
 *      Author: can
 */

#ifndef BULLETIN_H_
#define BULLETIN_H_

#include "Game.h"
#include <vector>


class Bulletin {
private:
	std::vector<Game> games;

public:
	Bulletin();
	~Bulletin();
	bool fillBulletinFromFile();

};

#endif /* BULLETIN_H_ */
