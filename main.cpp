#include <iostream>
#include "Piece.hpp"
#include "State.hpp"
#include "Square.hpp"
#include <vector>

using namespace std;

void printGrid(State s) //helper, to do: fix better function later
{
	for(int i = 7; i >= 0; i--)
	{
		for(int j = 0; j < 8; j++)
		{
			if(s.board[i][j].getPiece() == nullptr)
				cout << "Empty ";
			else
				s.board[i][j].getPiece()->printPiece(); 
		}
		cout << endl;
	}
}

int main()
{
	State game;

	//create all pieces
	Piece whiteKing(0, 4, King);
	Piece blackKing(7, 3, King);

	Piece rooka1(0,0, Rook);
	Piece rookh1(0,7, Rook);
	Piece rooka8(7, 0, Rook);
	Piece rookh8(7,7, Rook);

	Piece knightb1(0,1, Knight);
	Piece knightg1(0, 6, Knight);
	Piece knightb8(7, 1, Knight);
	Piece knightg8(7, 6, Knight);

	Piece bishopc1(0, 2, Bishop);
	Piece bishopf1(0, 5, Bishop);
	Piece bishopc8(7, 2, Bishop);
	Piece bishopf8(7, 5, Bishop);

	Piece whiteQueen(0, 3, Queen);
	Piece blackQueen(7, 4, Queen);

	


	//set intial pos
	game.board[0][4].setPiece(&whiteKing);
	game.board[7][3].setPiece(&blackKing);

	game.board[0][0].setPiece(&rooka1);
	game.board[0][7].setPiece(&rookh1);
	game.board[7][0].setPiece(&rooka8);
	game.board[7][7].setPiece(&rookh8);

	game.board[0][1].setPiece(&knightb1);
	game.board[0][6].setPiece(&knightg1);
	game.board[7][1].setPiece(&knightb8);
	game.board[7][6].setPiece(&knightg8);

	game.board[0][2].setPiece(&bishopc1);
	game.board[0][5].setPiece(&bishopf1);
	game.board[7][2].setPiece(&bishopc8);
	game.board[7][5].setPiece(&bishopf8);

	game.board[0][3].setPiece(&whiteQueen);
	game.board[7][4].setPiece(&blackQueen);
	
	
	//print the board
	printGrid(game);

	return 0;
}
	
/*
todo:
*sätt in alla bönder
*Fixa check för drag för alla pjäser, (gör klart switch-case i Piece.cpp)
*/