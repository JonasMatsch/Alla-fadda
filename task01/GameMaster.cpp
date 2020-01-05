#include <iostream>
#include <stdio.h>
#include "GameMaster.hpp"

void GameMaster::start()
{
    std::cout << "Choose youur game mode." << endl;
		std::cout << "(1) Human vs Human" << endl;
		std::cout << "(2) Human vs. Computer (Minimax)" << endl;
		std::cout << "(3) Human vs Computer (Random)" << endl;
		std::cout << "(4) Computer (Minimax) vs. Computer (Minimax)" << endl;
		std::cout << "(5) Exit Program" << endl;
		int mode;
		scanf("%i" , &mode);
		std::cout << gameBoard << endl;
		std::cout << "Player 1: X " << endl;
		std::cout << "Player 2: O " << endl;
		int exit = 0;
		while(exit == 0)
		{
			gameBoard = GameBoard();
			switch(mode){
				case 1:	player1 = new HumanPlayer(1);
						player2 = new HumanPlayer(2);
				case 2: player1 = new HumanPlayer(1);
						player2 = new ComputedPlayer(2,MINIMAX);
				case 3: player1 = new HumanPlayer(1);
						player2 = new ComputedPlayer(2,RANDOM);
				case 4: player1 = new ComputedPlayer(1,MINIMAX);
						player2 = new ComputedPlayer(2,MINIMAX);
				case 5: exit =1;
			}
			for(int i = 0;i<8;i++)
			{
			int w;
			w = gameBoard.getWinner();
			if(w != 0)
			{
				i = 10;
				std::cout << "Winner is: Player " << w << "(X)" << endl;
			}
			else{
			std::cout << player1 << endl;
			GameBoard* gb = new GameBoard();
			player1->play(gb);
			std::cout << player2 << endl;
			player2->play(gameBoard);
			std::cout << gameBoard << endl;
			}
			}
			std::cout << "A draw!"  << endl;
		}
}