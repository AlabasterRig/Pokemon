#include "../../../Public//Pokemon/Pokemons/Squirtle.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include "../../../Public/Utility/Utility.hpp"
#include <iostream>
using namespace std;

void Squirtle::Attack(Pokemon* AttackedPokemon)
{
	int damage = N_Utility::Utility::Randomize(AttackPower) + 5;
	std::cout << Name << " uses Water Gun on " << AttackedPokemon->Name << "!\n";
	N_Utility::Utility::WaitForEnter();
	AttackedPokemon->TakeDamage(damage);
	std::cout << AttackedPokemon->Name << " took " << damage << " damage!\n";
	std::cout << AttackedPokemon->Name << "'s current health: " << AttackedPokemon->Health << "/" << AttackedPokemon->MaxHealth << "\n";
	N_Utility::Utility::WaitForEnter();
}

Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::Water, 100, 10)
{
}
