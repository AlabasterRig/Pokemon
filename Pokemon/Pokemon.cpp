#include "Pokemon.hpp"
#include <string>
#include <iostream>
#include "EPokemonType.hpp"
using namespace std;

Pokemon::Pokemon()
{
	Name = "Unknown";
	Type = PokemonType::Normal;
	Health = 100;
}

Pokemon::Pokemon(string name, PokemonType type, int health)
{
	Name = name;
	Type = type;
	Health = health;
}

Pokemon::~Pokemon()
{
}

void Pokemon::Attack(Pokemon& AttackedPokemon)
{
	int damage = 10;
	cout << Name << " attacks " << AttackedPokemon.Name << "!\n";
	AttackedPokemon.TakeDamage(damage);
	cout << AttackedPokemon.Name << " took 10 damage!\n";}

void Pokemon::TakeDamage(int damage)
{
	Health -= damage;
	if (Health < 0)
	{
		Health = 0;
	}
}

bool Pokemon::IsFainted() const
{
	return Health <= 0;
}
