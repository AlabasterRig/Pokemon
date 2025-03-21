#include "../../../Public//Pokemon//Pokemons/Charmander.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include <iostream>
using namespace std;

void Charmander::Attack(Pokemon* AttackedPokemon)
{
	int damage = AttackPower + 5;
	cout << Name << " uses Ember on " << AttackedPokemon->Name << "!\n";
	AttackedPokemon->TakeDamage(damage);
}

Charmander::Charmander() : Pokemon("Charmander", PokemonType::Fire, 100, 10)
{
}