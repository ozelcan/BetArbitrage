/*
 * Game.h
 *
 *  Created on: Oct 11, 2018
 *      Author: can
 */

#ifndef GAME_H_
#define GAME_H_

#include <string>

class Game {
public:
	std::string league;
	std::string gameName;
	int gameCode;
	int minGameCountToPlay;
	float oddHomeWins;
	float oddDrawGame;
	float oddAwayWins;

	Game();
	~Game();
};

#endif /* GAME_H_ */
