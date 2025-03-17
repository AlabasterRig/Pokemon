#include "Game.hpp"
#include "Player.hpp"
#include <iostream>
#include "Utility.hpp"
#include "EPokemonType.hpp"
#include "WildEncounterManager.hpp"
using namespace std;

WildEncounterManager encounterManager;

Game::Game()
{
	ForestGrass = {
		{{"Pidgey", PokemonType::Normal, 40}, {"Caterpie", PokemonType::Bug, 35}},
		80,
		"Forest"
	};
	CaveGrass = {
		{{"Zubat", PokemonType::Poison, 40}, {"Geodude", PokemonType::Earth, 35}},
		80,
		"Cave"
	};
}

void Game::GameLoop(Player& player)
{
	int choice;
	bool KeepPlaying = true;

	while (KeepPlaying)
	{
		Utility::ClearConsole();
		cout << "System: What would you like to do next " << player.Name << "?\n";
		cout << "1. Battle a wild Pokemon\n";
		cout << "2. Visit the PokeCenter\n";
		cout << "3. Challenge Gyms\n";
		cout << "4. Enter Pokemon League\n";
		cout << "5. Exit the game\n";
		cout << "System: Enter the number of your choice: \n";
		cin >> choice;

		Utility::ClearInputBuffer();

		switch (choice)
		{
		case 1:
		{
			Pokemon wildPokemon = encounterManager.GetRandomPokemonFromGrass(ForestGrass);
			cout << "System: A wild " << wildPokemon.Name << " appeared!\n";
			break;
		}

		case 2:
			cout << "System: You head towards the PokeCentre.\n";
			player.ChosenPokemon.Heal();
			cout << "System: Your " << player.ChosenPokemon.Name << " has been fully healed!\n";
			break;

		case 3:
			cout << "System: You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
			break;

		case 4:
			cout << "System: You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\n";
			break;

		case 5:
			cout << "System: You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!'\n";
			char QuitChoice;
			cout << "System: Are you sure you want to quit? (Y/N): \n";
			cin >> QuitChoice;
			if (QuitChoice == 'Y' || QuitChoice == 'y')
			{
				KeepPlaying = false;
			}
			break;

		default:
			cout << "System: Invalid choice. Please try again.\n";
			break;
		}

		Utility::WaitForEnter();
	}

	cout << "System: Thanks for playing " << player.Name << " Goodbye!\n";
}
