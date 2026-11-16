#include "Coordinate.h"

Coordinate::Coordinate(int x, int y)
{
	this->X = x;
	this->Y = y;
}

bool Coordinate::Equals(int x, int y)
{
	return this->X == x && this->Y == y;
}
