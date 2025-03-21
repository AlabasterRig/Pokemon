#include "../../../Public//Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include <iostream>
using namespace std;

void Bulbasaur::Attack(Pokemon* AttackedPokemon)
{
	int damage = AttackPower + 5;
	cout << Name << " uses Vine Whip on " << AttackedPokemon->Name << "!\n";
	AttackedPokemon->TakeDamage(damage);
}

Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Grass, 100, 10)
{
}