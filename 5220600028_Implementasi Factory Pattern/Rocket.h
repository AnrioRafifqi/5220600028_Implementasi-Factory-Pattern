#pragma once
#include "Tiles.h"
#include <iostream>

class Rocket : public Tiles
{
	int x;
	int y;
public:
	void setCoordinate(int, int);
	int getCoordinateX();
	int getCoordinateY();
	void explode();
};

