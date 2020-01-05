#include <iostream>
#include <stdio.h>
#include "Player.hpp"
#include "GameBoard.hpp"

class HumanPlayer : public Player
{
	public:
	int num;
	HumanPlayer(int num);
	void play(GameBoard* board);
};