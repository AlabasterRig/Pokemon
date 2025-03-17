#include <iostream>
#include <string>
#include <limits>
#include "EPokemonChoice.hpp"
#include "Player.hpp"
#include "EPokemonType.hpp"
#include "Utility.hpp"
#include "Pokemon.hpp"
using namespace std;

class ProfessorOak
{
public:
	string Name;

	void GreetPlayer(Player& player)
	{
		cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
		Utility::WaitForEnter();
		cout << "Professor Oak: I am Professor Oak.\n";
		Utility::WaitForEnter();
	}

	void OfferPokemon(Player& player)
	{
		cout << "Professor Oak: Before we begin, what's your name, Trainer?\n";
		cout << "System: Enter your name: ";
		cin >> player.Name;

		cout << "Professor Oak: Ah, so your name is " << player.Name << "! A fine name indeed.\n";
		Utility::WaitForEnter();
		cout << "Professor Oak: In this vast world, Pokemon and humans live side by side, forging friendships and facing challenges together.\n";
		Utility::WaitForEnter();
		cout << "Professor Oak: Some people raise Pokemon as loyal companions, while others test their skills in thrilling battles.\n";
		Utility::WaitForEnter();
		cout << "Professor Oak: As for me, I’ve dedicated my life to studying these incredible creatures!\n";
		Utility::WaitForEnter();
		cout << "Professor Oak: But enough about me-let's talk about you. Do you dream of becoming a Pokemon Trainer?\n";
		Utility::WaitForEnter();
		cout << "Professor Oak: If so, you'll need a partner to begin your journey.\n";
		Utility::WaitForEnter();
		cout << "Professor Oak: Here, you may choose one of these three Pokemon to accompany you:\n";
		cout << "1. Bulbasaur - A Grass-type with a calm and steady nature.\n";
		cout << "2. Charmander - A fiery and determined Fire-type.\n";
		cout << "3. Squirtle - A Water-type with a tough shell and a brave heart.\n";
		cout << "System: Which Pokemon do you want to be your first companion? ";
		cout << "System: Enter the number of your choice: ";

		int choice;
		cin >> choice;
		player.ChoosePokemon(choice);
	}

	void ExplainMainQuest(Player& player)
	{
		Utility::ClearConsole();
		cout << "Professor Oak: Congratulations, " << player.Name << "! You've chosen " << player.ChosenPokemon.Name << "!" << endl;
		Utility::WaitForEnter();
		cout << "Professor Oak: But make no mistake, " << player.Name << ", this is only the beginning." << endl;
		Utility::WaitForEnter();
		cout << "Professor Oak: Oak - ay " << player.Name << ", I am about to explain you about your upcoming grand adventure." << endl;
		Utility::WaitForEnter();
		cout << "Professor Oak: You see, becoming a Pokemon Master is no easy feat. It takes courage, wisdom, and a bit of luck." << endl;
		Utility::WaitForEnter();
		cout << "Professor Oak: Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokemon Badges and conquer the Pokemon League." << endl;
		Utility::WaitForEnter();
		cout << player.Name << ": Wait... that sounds a lot like every other Pokemon game out there." << endl;
		Utility::WaitForEnter();
		cout << "Professor Oak: Shhh! Don't break the fourth wall" << player.Name << "! This is serious business." << endl;
		Utility::WaitForEnter();
		cout << "Professor Oak: To achieve this, you'll need to battle wild Pokemon, challenge gym leaders, and of course, keep your Pokemon healthy at the PokeCenter." << endl;
		Utility::WaitForEnter();
		cout << "Professor Oak: Along the way, you'll capture new Pokemon to strengthen your team. Just remember—there's a limit to how many Pokemon you can carry, so choose wisely!" << endl;
		Utility::WaitForEnter();
		cout << player.Name << ": Sounds like a walk in the park... right?" << endl;
		Utility::WaitForEnter();
		cout << "Professor Oak: Hah! That's what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let's just say you'll be starting from square one." << endl;
		Utility::WaitForEnter();
		cout << "Professor Oak: So, what do you say? Are you ready to become the next Pokemon Champion?\n";
		Utility::WaitForEnter();
		cout << player.Name << ": Ready as I'll ever be, Professor!\n";
		Utility::WaitForEnter();
		cout << "Professor Oak: That's the spirit! Now, your journey begins.";
		Utility::WaitForEnter();
	}
};

void GameLoop(Player& player)
{
	int choice;
	bool KeepPlaying = true;

	while (KeepPlaying)
	{
		Utility::ClearConsole();
		cout << "System: What would you like to do next?\n";
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
			cout << "System: You look around... but all the wild Pokemon are on vacation.Maybe try again later? \\n";
			Utility::WaitForEnter();
			break;

		case 2:
			cout << "System: You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\\n";;
			Utility::WaitForEnter();
			break;

		case 3:
			cout << "System: You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\\n";
			Utility::WaitForEnter();
			break;
			
		case 4:
			cout << "System: You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\\n";
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
}

int main()
{
	Pokemon pokemon("Pikachu", PokemonType::Electric, 100);
	Player player("Trainer", pokemon);
	ProfessorOak professorOak;

	professorOak.Name = "Professor Oak";

	professorOak.GreetPlayer(player);
	professorOak.OfferPokemon(player);
	professorOak.ExplainMainQuest(player);

	GameLoop(player);

	return 0;
}