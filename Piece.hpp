#pragma once

class Piece
{
	protected:
		int xpos;
		int ypos;
	public:
		Piece(){}
		Piece(int x, int y): xpos(x), ypos(y){}
};
