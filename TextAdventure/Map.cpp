#include "Map.h"
#include "EmptyRoom.h"
#include "MonsterRoom.h"

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
			// TODO: fix randomness
			// seed the random number generator
			srand(time(0));

			// roll a number between 0-100
			int randomRoll = rand() % 101;

			if (randomRoll < 10)
			{
				// monster room
				this->rooms[y].push_back(MonsterRoom());
			}
			else if (randomRoll < 15)
			{
				// loot room
				this->rooms[y].push_back(Room("Test", true, true, '#'));
			}
			else
			{
				// empty room
				this->rooms[y].push_back(EmptyRoom());
			}

			// 5% loot room
			// 1 boss room (also exit to next level)
			// 10% monster room
			// entrance room
			// every other room is empty

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
				cout << "[" << this->rooms[y][x].GetRoomSymbol() << "]";
			}
		}
		// hit enter
		cout << endl;
	}
}
