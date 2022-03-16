#include "TilesFactory.h"

Tiles* TilesFactory::getObject(std::string object, int x, int y)
{
    Tiles* output{};

    if (object == "OrdinaryTiles")
    {
        output = new OrdinaryTiles();
        output->setCoordinate(x, y);
    }
    else if (object == "TNT")
    {
        output = new TNT();
        output->setCoordinate(x, y);
    }
    else if (object == "Rocket")
    {
        output = new Rocket;
        output->setCoordinate(x, y);
    }

    return output;
}
