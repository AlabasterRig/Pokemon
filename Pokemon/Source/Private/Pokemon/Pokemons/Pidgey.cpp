#include "../../../Public/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include <iostream>

Pidgey::Pidgey()
{
	Pokemon("Pidgey", PokemonType::Normal, 100, 10);
}

void Pidgey::Attack(Pokemon* AttackedPokemon)
{
	int damage = AttackPower + 5;
	std::cout << Name << " uses Wing Attack on " << AttackedPokemon->Name << "!\n";
	AttackedPokemon->TakeDamage(damage);
}
