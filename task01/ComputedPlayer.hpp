#include <iostream>
#include "Player.hpp"
#include "GameBoard.hpp"
#include "Mode.hpp"
#include <time.h>

class ComputedPlayer : public Player
{
	private:
	int mode;
	int num;
	public:
	ComputedPlayer(int num,int mode);
	void play(GameBoard* board);
};