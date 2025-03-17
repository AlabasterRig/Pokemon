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
