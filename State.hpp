#pragma once

#include "Square.hpp"

class State
{
	private:
		bool mate = false;
	public:
		Square board[8][8]; //brädet
		State(){}
};
		
