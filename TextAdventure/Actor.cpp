#include "Actor.h"

Actor::Actor(std::string name, int x, int y)
{
	this->Name = name;
	this->PositionX = x;
	this->PositionY = y;
}

Coordinate Actor::GetPosition()
{
	return Coordinate(this->PositionX, this->PositionY);
}
