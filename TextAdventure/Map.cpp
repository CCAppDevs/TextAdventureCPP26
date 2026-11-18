#include "Map.h"

Map::Map(int width, int height, Actor* plr)
{
	this->sizeX = width;
	this->sizeY = height;
	this->player = plr;
	this->rooms = vector<vector<Room>>();

	for (int y = 0; y < this->sizeY; y++)
	{
		this->rooms.push_back(vector<Room>());
		for (int x = 0; x < this->sizeX; x++)
		{
			// create a room
			this->rooms[y].push_back(Room("Test", true, true));
		}
	}
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
			if (player->GetPosition().Equals(x, y))
			{
				// print p for player
				cout << "[P]";
			}
			else
			{
				cout << "[ ]";
			}
		}
		// hit enter
		cout << endl;
	}
}
