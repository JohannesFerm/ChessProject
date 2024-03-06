#include "Piece.hpp"
#include <iostream>

std::pair<int, int> Piece::getPos()
{
    return {xpos, ypos};
}

void Piece::Move(int x, int y)
{
    switch(type)
    {
        case King:
            if(abs(xpos - x) > 1 || abs(ypos - y) > 1)
                std::cout << "illegal move" << std::endl;
            else
            {                        //no check for moving into check
                xpos = x; ypos = y;
            }
            break;
    }
}

void Piece::printPiece()
{
    switch(type)
    {
        case King:
			std::cout << "King ";
			break;
		case Rook:
			std::cout << "Rook ";
			break;
		case Knight:
			std::cout << "Knight ";
			break;
		case Bishop:
			std::cout << "Bishop ";
			break;
		case Queen:
			std::cout << "Queen ";
			break;
        default:
            break;
    }
}