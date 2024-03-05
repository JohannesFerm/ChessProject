#pragma once
#include <utility>
#include<string>

enum pieceType
{
	King, Queen, Rook, Knight, Bishop, Pawn, None
};

class Piece
{
	private:
		int xpos;
		int ypos;
	public:
		pieceType type = None; //temporary to check if the board works 
		Piece(){}
		Piece(int x, int y, pieceType t): xpos(x), ypos(y), type(t){}
		void Move(int x, int y);
		std::pair<int, int> getPos();
};
