#include "TNT.h"

using namespace std;

TNT::TNT()
{
}

void TNT::setCoordinate(int tx, int ty)
{
	x = tx;
	y = ty;
}

int TNT::getCoordinateX()
{
	return x;
}

int TNT::getCoordinateY()
{
	return y;
}

void TNT::explode()
{
	cout << "TNT is Exploded" << endl;
}

Tiles TNT::createObject(int objX, int objY)
{
	this->setCoordinate(objX, objY);

}