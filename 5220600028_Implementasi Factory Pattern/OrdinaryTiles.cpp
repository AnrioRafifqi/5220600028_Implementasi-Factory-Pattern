#include "OrdinaryTiles.h"

using namespace std;

void OrdinaryTiles::setColor(string tempColor)
{
	color = tempColor;
}

string OrdinaryTiles::getColor()
{
	return color;
}

void OrdinaryTiles::setCoordinate(int tx, int ty)
{
	x = tx;
	y = ty;
}

int OrdinaryTiles::getCoordinateX()
{
	return x;
}

int OrdinaryTiles::getCoordinateY()
{
	return y;
}

void OrdinaryTiles::tap()
{
	cout << "Ordinary Tiles is tapped" << endl;
}
