#pragma once
#include "Tiles.h"
#include <string>

class OrdinaryTiles : public Tiles
{
	std::string color;
	int x;
	int y;
public: 
	void setColor(std::string);
	std::string getColor;
	void setCoordinate(int, int);
	int getCoordinateX();
	int getCoordinateY();
};

