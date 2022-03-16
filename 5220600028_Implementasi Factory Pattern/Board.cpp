#include "Board.h"

using namespace std;

Board::Board(int x, int y)
{	
	board[x][y];
	this->tilesGenerator(x, y);
}

void Board::tilesGenerator(int x, int y)
{
	// Fill the tiles
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			TilesFactory temp;
			// if baris == ganjil
			if (i % 2 != 0)
			{
				// isi TNT
				board[i][j] = temp.getObject("TNT", i, j);
			}

			// if baris == genap
			else if (i % 2 == 0)
			{
				// isi Rocket
				board[i][j] = temp.getObject("Rocket", i, j);
			}
		}
	}
}

Tiles* Board::getBoard(int x, int y)
{
	return this->board[x][y];
}

int main()
{
	Board board(5,5);
	Tiles* tempTiles;
	
	// Exploding TNT
	tempTiles = board.getBoard(1, 1);
	tempTiles->tap();

	// Exploding Rocket
	tempTiles = board.getBoard(4, 4);
	tempTiles->tap();


}
