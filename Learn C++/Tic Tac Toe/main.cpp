#include <iostream>
#include "gameplay.h"
using namespace std;

int main() {
	bool play = true;
	bool validPlayAgain = true;

	char playAgain;

	while (play) {
		validPlayAgain = true;

		bool gameOver = false;
		bool player1 = true;
		bool player2 = false;
		bool tie = false;

		char input = 'O';

		int inputNum = 0;
		int turns = 0;

		vector <char> gameBoard = {
			'1', '2', '3',
			'4', '5', '6',
			'7', '8', '9'
		};

		vector <bool> player1choices = {
			false, false, false,
			false, false, false,
			false, false, false
		};

		vector <bool> player2choices = {
			false, false, false,
			false, false, false,
			false, false, false
		};

		vector <bool> alreadyMarked = {
			false, false, false,
			false, false, false,
			false, false, false
		};
		GameBoard(gameBoard);
		while (!gameOver && turns < 9) {
			if (player1) {
				playerConditional(input, inputNum, gameBoard, alreadyMarked, player1choices, player1, player2);
			}
			else if (player2) {
				playerConditional(input, inputNum, gameBoard, alreadyMarked, player2choices, player1, player2);
			}
			if (playerVictory(player1choices)) {
				cout << "\nPlayer 1 wins\n";
				gameOver = true;
			}
			if (playerVictory(player2choices)) {
				cout << "\nPlayer 2 wins\n";
				gameOver = true;
			}
			turns++;
			if (turns == 9) {
				tie = true;
			}
		}
		if (tie) {
			cout << "\nOh! It was a near game. It is a Tie!\n";
		}

		while (validPlayAgain) {	
			playAgainFunc(playAgain, validPlayAgain, play);
		}
	}
	return 0;
}