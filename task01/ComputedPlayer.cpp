#include <iostream>
#include "ComputedPlayer.hpp"

void ComputedPlayer::play(GameBoard& board)
{
    	if(mode == RANDOM)
		{
			bool input = false;
			while(!input)
			{
			srand(time(0));
			int randomR = (rand () % 3) +1;
			int randomC = (rand () % 3) +1;			
			if(board.isFree(randomR,randomC))
			{
				input = true;
				std::cout << "Player" << num << ":" << randomR << "|" << randomC;
				board.board[randomR][randomC] = num;
			}
			else{
				printf("Invalid field selection");
			}
			}
		}
}