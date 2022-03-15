#include "TilesFactory.h"

Tiles* TilesFactory::getObject(std::string object, int x, int y)
{
    Tiles* output;

    if (object == "OrdinaryTiles")
    {
        output = new OrdinaryTiles();
    }
    else if (object == "TNT")
    {
        output = new TNT();
    }
    else if (object == "Rocket")
    {
        output = new Rocket;
    }
}
