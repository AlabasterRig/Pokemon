#include "../../../Public/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include <iostream>

Pikachu::Pikachu()
{
	Pokemon("Pikachu", PokemonType::Electric, 100, 10);
}

void Pikachu::ThunderShock(Pokemon& AttackedPokemon)
{
	int damage = AttackPower + 5;
	std::cout << Name << " uses Thunder Shock on " << AttackedPokemon.Name << "!\n";
	AttackedPokemon.TakeDamage(damage);
}
