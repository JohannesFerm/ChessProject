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

	//white pawns
	Piece pawna2(1,0, Pawn);
	Piece pawnb2(1,1, Pawn);
	Piece pawnc2(1,2, Pawn);
	Piece pawnd2(1,3, Pawn);
	Piece pawne2(1,4, Pawn);
	Piece pawnf2(1,5, Pawn);
	Piece pawng2(1,6, Pawn);
	Piece pawnh2(1,7, Pawn);

	//black pawns
	Piece pawna7(6,0, Pawn);
	Piece pawnb7(6,1, Pawn);
	Piece pawnc7(6,2, Pawn);
	Piece pawnd7(6,3, Pawn);
	Piece pawne7(6,4, Pawn);
	Piece pawnf7(6,5, Pawn);
	Piece pawng7(6,6, Pawn);
	Piece pawnh7(6,7, Pawn);



	


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
	
	game.board[1][0].setPiece(&pawna2);
	game.board[1][1].setPiece(&pawnb2);
	game.board[1][2].setPiece(&pawnc2);
	game.board[1][3].setPiece(&pawnd2);
	game.board[1][4].setPiece(&pawne2);
	game.board[1][5].setPiece(&pawnf2);
	game.board[1][6].setPiece(&pawng2);
	game.board[1][7].setPiece(&pawnh2);

	game.board[6][0].setPiece(&pawna7);
	game.board[6][1].setPiece(&pawnb7);
	game.board[6][2].setPiece(&pawnc7);
	game.board[6][3].setPiece(&pawnd7);
	game.board[6][4].setPiece(&pawne7);
	game.board[6][5].setPiece(&pawnf7);
	game.board[6][6].setPiece(&pawng7);
	game.board[6][7].setPiece(&pawnh7);



	
	//print the board
	printGrid(game);

	return 0;
}
	
/*
todo:
*sätt in alla bönder
*Fixa check för drag för alla pjäser, (gör klart switch-case i Piece.cpp)
*/