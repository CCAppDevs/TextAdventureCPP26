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
	Character(std::string name, int x, int y, int maxHealth);

	void Move(int x, int y);
	void Attack(Character& target, int damage);
	void TakeDamage(Character& source, int amount);
	bool Flee();
	void Defend();
	bool IsDead();
	int GetHealth();
	void SetHealth(int newHealth);
	int GetAttackPower();
	int GetMagicPower();
	int GetDefense();
};

