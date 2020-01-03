#include <iostream>
#include "Player.hpp"
#include "GameBoard.hpp"
#include "Mode.hpp"
#include "ComputedPlayer.hpp"
#include "HumanPlayer.hpp"

using namespace std;

class GameMaster
{
	private:
	Player* player1;
	Player* player2;
	GameBoard gameBoard;
	public:
	GameMaster();
	void start();
};