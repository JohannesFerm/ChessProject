#include "King.hpp"

bool King::Move(int x, int y)
{
	if(xpos - x > 1 || ypos - y > 1) //illegal move
		return false; 
	else //legal move, update position
	{
		xpos = x;
		ypos = y;
		return true;
	}
}
