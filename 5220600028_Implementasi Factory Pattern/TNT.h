#pragma once
#include "Tiles.h"
#include <iostream>

class TNT : public Tiles
{
	int x;
	int y;
public:
	TNT();
	void setCoordinate(int, int);
	int getCoordinateX();
	int getCoordinateY();
	void explode();
	Tiles createObject(int, int);
};

