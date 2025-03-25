#include "../../../Public/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include "../../../Public/Utility/Utility.hpp"
#include "../../../Public/Pokemon/FMove.hpp"
#include <iostream>

Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::Normal, 100, {Move("NORMAL ATTACK", 10), Move("Wing Attack", 15), Move("WHIRLWIND", 15)})
{
}

void Pidgey::Attack(Move SelectedMove, Pokemon* AttackedPokemon)
{
	int damage = N_Utility::Utility::Randomize(SelectedMove.Power) + 5;
	N_Utility::Utility::WaitForEnter();
	AttackedPokemon->TakeDamage(damage);
	std::cout << AttackedPokemon->Name << " took " << damage << " damage!\n";
	std::cout << AttackedPokemon->Name << "'s current health: " << AttackedPokemon->Health << "/" << AttackedPokemon->MaxHealth << "\n";
	N_Utility::Utility::WaitForEnter();
}
