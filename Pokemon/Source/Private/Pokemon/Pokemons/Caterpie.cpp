#include "../../../Public/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include <iostream>

Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::Bug, 100, 10)
{
}

void Caterpie::Attack(Pokemon* AttackedPokemon)
{
	int damage = AttackPower + 5;
	std::cout << Name << " uses Tackle on " << AttackedPokemon->Name << "!\n";
	AttackedPokemon->TakeDamage(damage);
}
