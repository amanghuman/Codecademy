#pragma once
#include <vector>
using namespace std;

void GameBoard(vector <char> gameBoard);
void playerConditional(char& input, int& inputNum, vector <char>& gameBoard, vector <bool>& alreadyMarked, 
	vector <bool>& playerchoices, bool& player1, bool& player2);

void playAgainFunc(char& playAgain, bool& validPlayAgain, bool& play);

bool playerVictory(vector <bool> playerchoices);
