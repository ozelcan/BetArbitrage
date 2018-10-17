/*
 * Bulletin.cpp
 *
 *  Created on: Oct 11, 2018
 *      Author: can
 */

#include <boost/filesystem/fstream.hpp>
#include "Bulletin.h"
#include <iostream>
#include <string>
#include <functional>
#include "Constants.h"


Bulletin::Bulletin() {
	// TODO Auto-generated constructor stub

}

Bulletin::~Bulletin() {
	// TODO Auto-generated destructor stub
}

bool Bulletin::fillBulletinFromFile() {
	bool ret(false);
	boost::filesystem::path inFilePath{bulletinFilePath};
	boost::filesystem::ifstream inFile(inFilePath);
	std::string line;
	Game temp_game;

	auto readGame = [&](){
		std::getline(inFile, line);
		temp_game.league = line;
		std::getline(inFile, line);
		temp_game.minGameCountToPlay = std::stoi(line.substr(5, 1));
		temp_game.gameCode = std::stoi(line.substr(6, 3));
		std::getline(inFile, line);
		temp_game.gameName = line;
		std::getline(inFile, line);
		temp_game.oddHomeWins = std::stof(line);
		std::getline(inFile, line);
		temp_game.oddDrawGame = std::stof(line);
		std::getline(inFile, line);
		temp_game.oddAwayWins = std::stof(line);
		games.push_back(temp_game);
	};

	while(std::getline(inFile, line))
	{
		if("*" == line)
		{
			readGame();
		}
	}

	return ret;
}
