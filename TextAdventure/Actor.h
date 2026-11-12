#pragma once
#include "Coordinate.h"

class Actor
{
private:
protected:
public:
	// location
	int PositionX;
	int PositionY;

	Actor(int x, int y);

	Coordinate GetPosition();
};

