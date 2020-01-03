#include <iostream>
#include <stdio.h>

class Player
{
	public:
	virtual void play(GameBoard& board);
	virtual friend ostream& operator<<(ostream& out , const Player& Player)
	{
		std::cout << "Player " << Player.num<< "'s turn" << endl;
	};
	protected:
	int num;
	bool turn;
	Player(int num){};
	virtual ~Player(){};
};

