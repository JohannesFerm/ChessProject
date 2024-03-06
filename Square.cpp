#include "Square.hpp"

Piece* Square::getPiece()
{
    if(curPiece == nullptr)
        return nullptr;
    return curPiece;
}

void Square::setPiece(Piece* p)
{
    curPiece = p;
}