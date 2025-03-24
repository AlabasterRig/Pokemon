#include "../../../Public/Character/Player/Player.hpp"
#include "../../../Public/Pokemon/Pokemon.hpp"
#include "../../../Public/Utility/Utility.hpp"
#include "../../../Public/Pokemon/EPokemonType.hpp"
#include "../../../Public/Pokemon/EPokemonChoice.hpp"
#include "../../../Public/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../Public/Pokemon/Pokemons/Charmander.hpp"
#include "../../../Public/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../Public/Pokemon/Pokemons/Pikachu.hpp"
#include <iostream>
using namespace std;


Player::Player() {
	Name = "Trainer";
}

Player::Player(string name)
{
	Name = name;
}

void Player::ChoosePokemon(int choice)
{
	switch ((PokemonChoice)choice)
	{
	case PokemonChoice::Bulbasaur:
		ChosenPokemon = new Bulbasaur();
		break;
	case PokemonChoice::Charmander:
		ChosenPokemon = new Charmander();
		break;
	case PokemonChoice::Squirtle:
		ChosenPokemon = new Squirtle();
		break;
	default:
		ChosenPokemon = new Pikachu();
		break;
	}

	cout << "System: You have chosen " << ChosenPokemon->Name << " as your first Pokemon!\n";
	N_Utility::Utility::WaitForEnter();
}