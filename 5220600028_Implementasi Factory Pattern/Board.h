#pragma once

#include <string>
#include <iostream>
#include "TilesFactory.h"

#define MAX 99


class Board
{
	Tiles* board[MAX][MAX];
public:
	Board(int,int);
	void tilesGenerator(int, int);
	Tiles* getBoard(int x, int y);
};

