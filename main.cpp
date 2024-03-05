#include <iostream>
#include "Piece.hpp"
#include "State.hpp"
#include <vector>

using namespace std;

void printGrid(State s) //helper, to do: fix better function later
{
	for(int i = 7; i >= 0; i--)
	{
		for(int j = 0; j < 8; j++)
		{
	
				switch(s.board[i][j].type) //switch over Piece type
				{
					case King:
						cout << "King ";
						break;
					case Rook:
						cout << "Rook ";
						break;
					case Knight:
						cout << "Knight ";
						break;
					case Bishop:
						cout << "Bishop ";
						break;
					case Queen:
						cout << "Queen ";
						break;
					default:
						cout << "Empty ";
						break;
				} 
		}
		cout << endl;
	}
}

int main()
{
	State game;

	game.board[0][0] = Piece(0,0,Rook);
	game.board[0][1] = Piece(0,1,Knight);
	game.board[0][2] = Piece(0,2, Bishop);
	game.board[0][3] = Piece(0,3,Queen);
	game.board[0][4] =  Piece(0,4, King);
	
	//game.board[0][4].Move(2, 4);
	
	//set inital positions

	printGrid(game);

	return 0;
}
	
/*
todo:
*fixa med enumen, att ha None på Piece är konstigt, byt ut typen på board kanske?
*Sätt in alla pjäser
*Fixa check för drag för alla pjäser, (gör klart switch-case i Piece.cpp)
*/