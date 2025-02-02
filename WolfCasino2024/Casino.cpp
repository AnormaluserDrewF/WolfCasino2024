#include <iostream>
#include <string>
#include "Casino.h"
#include "TicTacToeGame.h"

// class Casino implemetation file
namespace CSC2034 {
	void Casino::play(string gameName) {
		Casino* game = NULL;   //pointer should refer to object of subclass

		if (gameName == "TicTacToe")
			game = TicTacToeGame::makeGame(); // TicTacToeGame::makeGame();
		else
			throw NoGame(gameName + " game not found!!");

		game->start();  // using late binding, invoke game start
		delete game;	// cleaning up heap

	}

	void Casino::start() {
		std::cout << "Subclass funtion start() is not defined." << endl;
	}

	Casino::~Casino() {
		std::cout << "Casino desctructor here" << endl;
	}
}
