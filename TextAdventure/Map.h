#pragma once
#include <iostream>
#include "Actor.h"
#include <vector>
#include "Room.h"
#include <random>

using namespace std;

class Map
{
private:
	int sizeX; // width
	int sizeY; // height
	Actor* player;
	// represent the running rooms
	vector<vector<Room>> rooms;
	mt19937* randomGen;

protected:

public:
	Map(int width, int height, Actor* plr, mt19937* gen);

	void PrintMap();
};

// map
//      end goal (stairs?)
// heads up display
// prompt/menu
// resources/loot/rewards
// enemies (not required)
    // stats
    // boss
// player/hero
    // stats
// gameplay loop
// randomness