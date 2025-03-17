#include "Pokemon.hpp"
#include <string>
#include <iostream>
using namespace std;

Pokemon::Pokemon()
{
	Name = "Pikachu";
	Type = PokemonType::Electric;
	Health = 100;
}

Pokemon::Pokemon(string name, PokemonType type, int health)
{
	Name = name;
	Type = type;
	Health = health;
}

Pokemon::Pokemon(const Pokemon& other)
{
	Name = other.Name;
	Type = other.Type;
	Health = other.Health;
}

Pokemon::~Pokemon()
{
}

void Pokemon::Attack()
{
	cout << "Pokemon is attacking!" << endl;
}
