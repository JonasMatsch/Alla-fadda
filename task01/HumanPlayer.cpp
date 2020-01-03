#include <iostream>
#include "HumanPlayer.hpp"

void HumanPlayer::play(GameBoard& board){
    	bool input = false;
		while(!input){
		std::cout << "Select a row:";
		int inputR;
		scanf("%i",&inputR);
		std::cout << "Select a column";
		int inputC;
		scanf("%i",&inputC);
		if(board.isFree(inputR,inputC))
		{
			input = true;
			std::cout << "Player " << num << ":" << inputR << "|" << inputC;
			board.board[inputR][inputC] = num;
		}
		else
		{
			printf("Invalid field selection");
		}
		}
	}