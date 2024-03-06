#pragma once
#include "Piece.hpp"

class Square
{
    private:
        Piece* curPiece = nullptr;
        bool check;
    public:
        Square(){};
        Square(Piece* p):curPiece(p){}
        Piece* getPiece();
        void setPiece(Piece* p);

};