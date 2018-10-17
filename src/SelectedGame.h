/*
 * SelectedGame.h
 *
 *  Created on: Oct 11, 2018
 *      Author: can
 */

#ifndef SELECTEDGAME_H_
#define SELECTEDGAME_H_

#include <Game.h>

enum SelectedOdd{
	home_wins,
	draw_game,
	away_wins
};

class SelectedGame: public Game {
private:
	SelectedOdd selectedOdd;

public:
	SelectedGame();
	~SelectedGame();
};

#endif /* SELECTEDGAME_H_ */
