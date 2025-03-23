#include "../../../Public//Pokemon//Pokemons/Charmander.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include "../../../Public/Utility/Utility.hpp"
#include "../../../Public/Pokemon/Move.hpp"
#include <iostream>
using namespace std;

void Charmander::Attack(Move SelectedMove, Pokemon* AttackedPokemon)
{
	int damage = N_Utility::Utility::Randomize(SelectedMove.Power) + 5;
	cout << Name << " uses Ember on " << AttackedPokemon->Name << "!\n";
	N_Utility::Utility::WaitForEnter();
	AttackedPokemon->TakeDamage(damage);
	std::cout << AttackedPokemon->Name << " took " << damage << " damage!\n";
	std::cout << AttackedPokemon->Name << "'s current health: " << AttackedPokemon->Health << "/" << AttackedPokemon->MaxHealth << "\n";
	N_Utility::Utility::WaitForEnter();
}

Charmander::Charmander() : Pokemon("Charmander", PokemonType::Fire, 100, {Move("NORMAL ATTACK", 10), Move("EMBER", 15), Move("FLAMETHROWER", 15)})
{
}