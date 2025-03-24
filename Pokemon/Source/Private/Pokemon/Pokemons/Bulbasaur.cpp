#include "../../../Public//Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include "../../../Public/Utility/Utility.hpp"
#include "../../../Public/Pokemon/Move.hpp"
#include <iostream>
using namespace std;

void Bulbasaur::Attack(Move SelectedMove, Pokemon* AttackedPokemon)
{
	int damage = N_Utility::Utility::Randomize(SelectedMove.Power) + 5;
	N_Utility::Utility::WaitForEnter();
	AttackedPokemon->TakeDamage(damage);
	std::cout << AttackedPokemon->Name << " took " << damage << " damage!\n";
	std::cout << AttackedPokemon->Name << "'s current health: " << AttackedPokemon->Health << "/" << AttackedPokemon->MaxHealth << "\n";
	N_Utility::Utility::WaitForEnter();
}

Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Grass, 100, {Move("NORMAL ATTACK", 10), Move("VINE WHIP", 15), Move("SEED BOMB", 15)})
{
}