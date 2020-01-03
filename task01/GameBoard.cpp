#include <iostream>
#include <stdio.h>
#include "GameBoard.hpp"

GameBoard::GameBoard(int num)
{
    size = num;
}

char GameBoard::convert(int player)
{	
    if(player == 1)
		{
			return 'X';
		}
		else
		{
			return 'O';
		}
}
bool GameBoard::isFree(int row,int column)
{
        if(board[row][column] == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
}
int GameBoard::getWinner()
{
        if((board[0][0] == board[1][0] == board[2][0])){return board[0][0];}else{return 0;}
		if((board[0][1] == board[1][1] == board[2][1])){return board[0][1];}else{return 0;}
		if((board[0][2] == board[1][2] == board[2][2])){return board[0][2];}else{return 0;}
		if((board[0][0] == board[0][1] == board[0][2])){return board[0][0];}else{return 0;}
		if((board[1][0] == board[1][1] == board[2][2])){return board[1][0];}else{return 0;}
		if((board[2][0] == board[2][1] == board[2][2])){return board[2][0];}else{return 0;}
		if((board[0][0] == board[1][1] == board[2][2])){return board[1][1];}else{return 0;}
		if((board[0][2] == board[1][1] == board[2][0])){return board[1][1];}else{return 0;}
}
