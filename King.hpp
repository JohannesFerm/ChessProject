#pragma once
#include "Piece.hpp"

class King:public Piece
{
	public:
		King(int x, int y): Piece(x, y){}
		bool Move(int x, int y);
};
