#include "Map.h"

Map::Map(int width, int height)
{
	this->sizeX = width;
	this->sizeY = height;
}

void Map::PrintMap()
{
	using namespace std;
	cout << "Map Size: " << this->sizeX << "x" << this->sizeY << endl;

	cout << endl;

	// algorithm for drawing a grid

	for (int y = 0; y < this->sizeY; y++)
	{
		for (int x = 0; x < this->sizeX; x++)
		{
			// print a room
			cout << "[ ]";
		}
		// hit enter
		cout << endl;
	}
}
