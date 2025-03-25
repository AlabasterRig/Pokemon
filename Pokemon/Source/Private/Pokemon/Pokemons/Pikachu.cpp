#include "../../../Public/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include "../../../Public/Utility/Utility.hpp"
#include "../../../Public/Pokemon/FMove.hpp"
#include <iostream>

Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::Electric, 100, {Move("NORMAL ATTACK", 10), Move("Thunder", 15), Move("IRON TAIL", 15)})
{
}

void Pikachu::Attack(Move SelectedMove, Pokemon* AttackedPokemon)
{
	if (SelectedMove.Name == "Thunder" && AttackedPokemon->CanApplyEffect())
	{
		AttackedPokemon->ApplyEffect(EStatusEffectType::PARALYZED);
	}
	int damage = N_Utility::Utility::Randomize(SelectedMove.Power) + 5;
	N_Utility::Utility::WaitForEnter();
	AttackedPokemon->TakeDamage(damage);
	std::cout << AttackedPokemon->Name << " took " << damage << " damage!\n";
	std::cout << AttackedPokemon->Name << "'s current health: " << AttackedPokemon->Health << "/" << AttackedPokemon->MaxHealth << "\n";
	N_Utility::Utility::WaitForEnter();
}
