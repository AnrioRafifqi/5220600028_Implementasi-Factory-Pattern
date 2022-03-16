#pragma once

class Tiles
{
public:
	virtual void setCoordinate(int, int) = 0;
	virtual void tap() = 0;
	Tiles();
};

