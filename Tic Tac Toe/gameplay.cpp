#include <iostream>
#include <vector>
using namespace std;

//code to print the tic-tac-toe gameboard on screen
void GameBoard(vector <char> gameBoard) {
	cout << "\n " << gameBoard[0] << " | " << gameBoard[1] << " | " << gameBoard[2] << " \n------------\n";
	  cout << " " << gameBoard[3] << " | " << gameBoard[4] << " | " << gameBoard[5] << " \n------------\n";
	  cout << " " << gameBoard[6] << " | " << gameBoard[7] << " | " << gameBoard[8] << " \n";
} 

//tic-tac-toe game logic based on player input
void playerConditional(char& input, int& inputNum, vector <char>& gameBoard, vector <bool>& alreadyMarked,
	vector <bool>& playerchoices, bool& player1, bool& player2) {
	
	//char to contain player is currently playing
	char player;
	
	//bool to close while loop if the choice by player is valid
	bool validChoice = false;
	
	//Checks which player currently is playing
	if (input == 'O') {
		player = '1';
	}
	else {
		player = '2';
	}

	//loop through till a valid choice is made
	while (!validChoice) {
	
		//Print which player is playing
		cout << "\nPlayer " << player << " turn\n";

		//Asks for player's choice
		cout << "Choose your location(1-9): ";
		cin >> inputNum;
		if (inputNum <= 9) {
			if (!alreadyMarked[inputNum - 1]) {

				//add the player choice to the gameboard
				gameBoard[inputNum - 1] = input;

				//flip the choice in player choices to true
				playerchoices[inputNum - 1] = true;

				//Switch to next player's choice output on gameboard
				if (input == 'O') {
					input = 'X';
				}
				else {
					input = 'O';
				}

				//switch between player turns
				player1 = !player1;
				player2 = !player2;

				//mark the current marked position to already marked array
				alreadyMarked[inputNum - 1] = true;

				//close the while loop
				validChoice = true;
			}
			else {
				//print to tell player to choose different location
				cout << "\nThis position is already marked by other player!\nPlease choose different location!\n";
			}
		}

		//through an error and asks player to input another number
		else if(inputNum > 9){
			//prints an error if the input is greater than 9
			cout << "\nInvalid input. Please choose a location between 1 - 9.\n";
		}

		//prints gameboard
		GameBoard(gameBoard);
	}
}

//function to play the game again 
void playAgainFunc(char& playAgain, bool& validPlayAgain, bool& play) {
	//asks player to play again
	cout << "\nDo you want to play again? (y/n)\n";

	//store player input
	cin >> playAgain;

	//conditional if player selects No
	if (playAgain == 'n' || playAgain == 'N') {
		cout << "\nThank you for playing the game! See you again!\n";
		validPlayAgain = false;

		//this bool is to end the program
		play = false;
	}

	//conditional if player selects Yes
	else if (playAgain == 'y' || playAgain == 'Y') {
		cout << "\nGreat! Let's start a new game!\n";
		validPlayAgain = false;
	}

	//conditional if players selects any other character
	else {
		cout << "\nInvalid Input. Please enter either 'y' or 'n'!\n";
	}
}

//to find if any of the player wins
bool playerVictory(vector <bool> playerchoices) {
	if ((playerchoices[0] && playerchoices[3] && playerchoices[6]) || (playerchoices[1] && playerchoices[4] && playerchoices[7]) ||
		(playerchoices[2] && playerchoices[5] && playerchoices[8]) || (playerchoices[0] && playerchoices[1] && playerchoices[2]) ||
		(playerchoices[3] && playerchoices[4] && playerchoices[5]) || (playerchoices[6] && playerchoices[7] && playerchoices[8]) ||
		(playerchoices[0] && playerchoices[4] && playerchoices[8]) || (playerchoices[2] && playerchoices[4] && playerchoices[6])) {
		return true;
	}
	return false;
}