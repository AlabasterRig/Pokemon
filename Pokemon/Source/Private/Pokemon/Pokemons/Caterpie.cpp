#include "../../../Public/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include "../../../Public/Utility/Utility.hpp"
#include "../../../Public/Pokemon/Move.hpp"
#include <iostream>

Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::Bug, 100, {Move("NORMAL ATTACK", 10), Move("TACKLE", 15), Move("STRING SHOT", 15)})
{
}

void Caterpie::Attack(Move SelectedMove, Pokemon* AttackedPokemon)
{
	int damage = N_Utility::Utility::Randomize(SelectedMove.Power) + 5;
	std::cout << Name << " uses Tackle on " << AttackedPokemon->Name << "!\n";
	N_Utility::Utility::WaitForEnter();
	AttackedPokemon->TakeDamage(damage);
	std::cout << AttackedPokemon->Name << " took " << damage << " damage!\n";
	std::cout << AttackedPokemon->Name << "'s current health: " << AttackedPokemon->Health << "/" << AttackedPokemon->MaxHealth << "\n";
	N_Utility::Utility::WaitForEnter();
}
