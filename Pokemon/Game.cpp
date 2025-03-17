#include "Game.hpp"
#include "Player.hpp"
#include <iostream>
#include "Utility.hpp"
#include "FGrass.hpp"
#include "EPokemonType.hpp"
using namespace std;

Game::Game()
{
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
			cout << "System: You look around... but all the wild Pokemon are on vacation.Maybe try again later? \n";
			Utility::WaitForEnter();
			break;

		case 2:
			cout << "System: You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\n";;
			Utility::WaitForEnter();
			break;

		case 3:
			cout << "System: You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
			Utility::WaitForEnter();
			break;

		case 4:
			cout << "System: You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\n";
			Utility::WaitForEnter();
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
			cout << "System: Invalid choice. Please try again.\\n";
			Utility::WaitForEnter();
			break;
		}

		Utility::WaitForEnter();
	}

	cout << "System: Thanks for playing " << player.Name << " Goodbye!\n";
}
