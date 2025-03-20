#include "../../../Public//Pokemon/Pokemons/Squirtle.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include <iostream>
using namespace std;

void Squirtle::Attack(Pokemon* AttackedPokemon)
{
	int damage = AttackPower + 5;
	std::cout << Name << " uses Water Gun on " << AttackedPokemon->Name << "!\n";
	AttackedPokemon->TakeDamage(damage);
}

Squirtle::Squirtle()
{
	Pokemon("Squirtle", PokemonType::Water, 100, 10);
}
