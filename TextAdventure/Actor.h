#pragma once
#include "Coordinate.h"
#include <string>

class Actor
{
private:
protected:
public:
	// location
	int PositionX;
	int PositionY;
	std::string Name;

	Actor(std::string name, int x, int y);

	Coordinate GetPosition();
};

