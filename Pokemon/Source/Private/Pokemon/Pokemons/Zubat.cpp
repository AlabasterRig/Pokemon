#include "../../../Public/Pokemon/Pokemons/Zubat.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include <iostream>

Zubat::Zubat()
{
	Pokemon("Zubat", PokemonType::Poison, 100, 20);
}

void Zubat::Attack(Pokemon* AttackedPokemon)
{
	int damage = AttackPower + 5;
	std::cout << Name << " uses Super Sonic on " << AttackedPokemon->Name << "!\n";
	AttackedPokemon->TakeDamage(damage);
}
