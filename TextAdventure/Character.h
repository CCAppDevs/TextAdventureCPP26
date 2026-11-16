#pragma once
#include "Actor.h"

class Character : public Actor
{
private:
protected:
	int Strength;
	int Intelligence;
	int Armor;
	int Health;
	int MaxHealth;

public:
	// move
	// attack
	// flee
	// defend
	// isDead

	// get health
	// set health
	// attack power (derive)
	// magic power (derive)
	// defense (derive)
};

