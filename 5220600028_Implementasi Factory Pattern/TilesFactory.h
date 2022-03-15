#pragma once
#include <string>
#include "Tiles.h"
#include "Rocket.h"
#include "TNT.h"
#include "OrdinaryTiles.h"

class TilesFactory
{
public:
	Tiles* getObject(std::string, int, int);
};

