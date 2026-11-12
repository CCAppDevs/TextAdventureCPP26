#pragma once
#include <iostream>
#include "Actor.h"


class Map
{
private:
	int sizeX; // width
	int sizeY; // height
	Actor* player;

protected:

public:
	Map(int width, int height, Actor* plr);

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