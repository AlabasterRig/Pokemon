#include "../../../Public/Pokemon/Pokemons/Zubat.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include <iostream>

Zubat::Zubat()
{
	Pokemon("Zubat", PokemonType::Poison, 100, 20);
}

void Zubat::WingAttack(Pokemon& AttackedPokemon)
{
	int damage = AttackPower + 5;
	std::cout << Name << " uses Wing Attack on " << AttackedPokemon.Name << "!\n";
	AttackedPokemon.TakeDamage(damage);
}
