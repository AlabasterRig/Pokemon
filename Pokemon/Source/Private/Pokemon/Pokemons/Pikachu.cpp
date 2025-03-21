#include "../../../Public/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include "../../../Public/Utility/Utility.hpp"
#include <iostream>

Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::Electric, 100, 10)
{
}

void Pikachu::Attack(Pokemon* AttackedPokemon)
{
	int damage = N_Utility::Utility::Randomize(AttackPower) + 5;
	std::cout << Name << " uses Thunder Shock on " << AttackedPokemon->Name << "!\n";
	N_Utility::Utility::WaitForEnter();
	AttackedPokemon->TakeDamage(damage);
	std::cout << AttackedPokemon->Name << " took " << damage << " damage!\n";
	std::cout << AttackedPokemon->Name << "'s current health: " << AttackedPokemon->Health << "/" << AttackedPokemon->MaxHealth << "\n";
	N_Utility::Utility::WaitForEnter();
}
