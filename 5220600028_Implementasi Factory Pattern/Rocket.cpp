#include "Rocket.h"

using namespace std;

void Rocket::setCoordinate(int tx, int ty)
{
	x = tx;
	y = ty;
}

int Rocket::getCoordinateX()
{
	return x;
}

int Rocket::getCoordinateY()
{
	return y;
}

void Rocket::explode()
{
	cout << "Rocket is Exploded" << endl;
}
