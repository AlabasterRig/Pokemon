#include "../../../Public/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include "../../../Public/Utility/Utility.hpp"
#include <iostream>

Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::Normal, 100, 10)
{
}

void Pidgey::Attack(Pokemon* AttackedPokemon)
{
	int damage = N_Utility::Utility::Randomize(AttackPower) + 5;
	std::cout << Name << " uses Wing Attack on " << AttackedPokemon->Name << "!\n";
	N_Utility::Utility::WaitForEnter();
	AttackedPokemon->TakeDamage(damage);
	std::cout << AttackedPokemon->Name << " took " << damage << " damage!\n";
	std::cout << AttackedPokemon->Name << "'s current health: " << AttackedPokemon->Health << "/" << AttackedPokemon->MaxHealth << "\n";
	N_Utility::Utility::WaitForEnter();
}
