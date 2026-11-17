#include "Character.h"

Character::Character(std::string name, int x, int y, int maxHealth) : Actor(name, x, y)
{
	this->MaxHealth = maxHealth;
	this->Health = this->MaxHealth;
}

void Character::Move(int x, int y)
{
	this->PositionX = x;
	this->PositionY = y;
}

void Character::Attack(Character& target, int damage)
{
	// TODO: handle attack here
}

void Character::TakeDamage(Character& source, int amount)
{
	// TODO: do we want to output something here?
	SetHealth(this->Health - amount);
}

bool Character::Flee()
{
	// TODO: handle flee here
	return false;
}

void Character::Defend()
{
	// TODO: handle defend here
}

bool Character::IsDead()
{
	return this->Health > 0;
}

int Character::GetHealth()
{
	return this->Health;
}

void Character::SetHealth(int newHealth)
{
	if (newHealth < 0)
	{
		this->Health = 0;
	}
	else if (newHealth > this->MaxHealth)
	{
		this->Health = this->MaxHealth;
	}
	else
	{
		this->Health = newHealth;
	}
}

int Character::GetAttackPower()
{
	// TODO: add attack power
	return 0;
}

int Character::GetMagicPower()
{
	// TODO: add magic power
	return 0;
}

int Character::GetDefense()
{
	// TODO: add defense
	return 0;
}
