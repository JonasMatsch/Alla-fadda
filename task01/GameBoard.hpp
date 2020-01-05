#include <iostream>
#include <ostream>
using namespace std;

class GameBoard
{
	private:
	int size;
	public:
	int board[3][3];
	~GameBoard();
	void insert(int num1,int num2,int num3);
	char convert(int player);
	bool isFree(int row,int column);
	int getSize();
	int getWinner();
	bool hasAvailableMoves();
	friend ostream operator<<(ostream &out , const GameBoard &board)
	{
		std::cout << "  1   " << "2   " << "3" <<  endl;
		std::cout << "---------------------------------" << endl;
		std::cout << "1 | " << convert(board[0][0]) << "| " convert(board[0][1]) << "| " << convert(board[0][2]) << "| " endl;
		std::cout << "---------------------------------" << endl;
		std::cout << "2 | " << convert(board[1][0]) << "| " convert(board[1][1]) << "| " << convert(board[1][2]) << "| " endl;
		std::cout << "---------------------------------" << endl;
		std::cout << "3 | " << convert(board[2][0]) << "| " convert(board[2][1]) << "| " << convert(board[2][2]) << "| " endl;
		std::cout << "---------------------------------" << endl;
	}
};