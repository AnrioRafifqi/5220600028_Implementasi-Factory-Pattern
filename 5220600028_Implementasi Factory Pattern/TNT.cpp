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

void TNT::tap()
{
	cout << "TNT is tapped " << endl;
	this->explode();
}