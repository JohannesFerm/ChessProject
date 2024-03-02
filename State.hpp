#pragma once

#include "Piece.hpp"

class State
{
	private:
		bool mate = false;
	public:
		Piece board[8][8]; //brädet
		State(){}
};
		
