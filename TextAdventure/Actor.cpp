#include "Actor.h"

Actor::Actor(int x, int y)
{
	this->PositionX = x;
	this->PositionY = y;
}

Coordinate Actor::GetPosition()
{
	return Coordinate(this->PositionX, this->PositionY);
}
