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

Player::Player(const Player& other)
{
	Name = other.Name;
	ChosenPokemon = other.ChosenPokemon;
}

void Player::ChoosePokemon(int choice)
{
	switch (choice)
	{
	case 1:
		ChosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
		break;
	case 2:
		ChosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
		break;
	case 3:
		ChosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
		break;
	default:
		ChosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
		break;
	}

	cout << "System: You have chosen " << ChosenPokemon.Name << " as your first Pokemon!\n";
	Utility::WaitForEnter();
}