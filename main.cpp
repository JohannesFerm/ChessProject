#include <iostream>
#include "Piece.hpp"
#include "State.hpp"
#include "Square.hpp"
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;

void drawBoard(sf::RenderWindow& wind)
{
	enum color{White, Black};
	color c = White;
	for(int i = 0; i < 8; i++)
	{
		if(i % 2 == 0) //if the row is even we have a white square to begin with
			c = White;
		else
			c = Black;
		for(int j = 0; j < 8;j++)
		{
			sf::RectangleShape sq(sf::Vector2f(800/8, 800/8));
			sq.setPosition(j*100, i*100);
				
			switch(c)
			{
				case White:
					sq.setFillColor(sf::Color::White);
					c = Black;
					break;
				case Black:
					sq.setFillColor(sf::Color::Black);
					c = White;
					break;
				default:
					break;
			}
			wind.draw(sq);
		}
	}
}
		
			
			
	

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

	//print the board, intial position
	printGrid(game);

	//SFML, graphics
	
	//load picute of pieces and draw it to the window
	sf::Texture pieces;
	pieces.loadFromFile("../chesspieces.png");
	
	sf::IntRect test(20,20, 161, 144);
	
	sf::Sprite sprite(pieces, test);
	//sprite.setTexture(piece);	
		
	sf::RenderWindow window(sf::VideoMode(800, 800), "Chess"); 
	while(window.isOpen())
	{
		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
				window.close();
		}
		drawBoard(window);
		window.draw(sprite);
		window.display();
	}

	return 0;
}
	
/*
todo:
*snygga till, vart ska drawBoard() ligga osv
*rita in pjäser utifrån deras position 
*Fixa check för drag för alla pjäser, (gör klart switch-case i Piece.cpp)
*/
