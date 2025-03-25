#include "../../../Public//Pokemon/Pokemons/Squirtle.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include "../../../Public/Utility/Utility.hpp"
#include "../../../Public/Pokemon/FMove.hpp"
#include <iostream>
using namespace std;

void Squirtle::Attack(Move SelectedMove, Pokemon* AttackedPokemon)
{
	int damage = N_Utility::Utility::Randomize(SelectedMove.Power) + 5;
	N_Utility::Utility::WaitForEnter();
	AttackedPokemon->TakeDamage(damage);
	std::cout << AttackedPokemon->Name << " took " << damage << " damage!\n";
	std::cout << AttackedPokemon->Name << "'s current health: " << AttackedPokemon->Health << "/" << AttackedPokemon->MaxHealth << "\n";
	N_Utility::Utility::WaitForEnter();
}

Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::Water, 100, {Move("NORMAL ATTACK", 10), Move("WATER GUN", 15), Move("SHELL SMASH", 15)})
{
}
