#include "Player.hpp"
#include <iostream>
#include "Utility.hpp"
#include "EPokemonType.hpp"
#include "EPokemonChoice.hpp"
using namespace std;


Player::Player() {
	Name = "Trainer";
	ChosenPokemon = Pokemon();
}

Player::Player(string name, Pokemon chosenPokemon)
{
	Name = name;
	ChosenPokemon = chosenPokemon;
}

void Player::ChoosePokemon(int choice)
{
	switch ((PokemonChoice)choice)
	{
	case PokemonChoice::Bulbasaur:
		ChosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
		break;
	case PokemonChoice::Charmander:
		ChosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
		break;
	case PokemonChoice::Squirtle:
		ChosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
		break;
	default:
		ChosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
		break;
	}

	cout << "System: You have chosen " << ChosenPokemon.Name << " as your first Pokemon!\n";
	Utility::WaitForEnter();
}