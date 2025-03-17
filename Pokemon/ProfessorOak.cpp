#include "ProfessorOak.hpp"
#include "Player.hpp"
#include "Utility.hpp"

void ProfessorOak::GreetPlayer(Player& player)
{
	cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
	Utility::WaitForEnter();
	cout << "Professor Oak: I am Professor Oak.\n";
	Utility::WaitForEnter();
}

void ProfessorOak::OfferPokemon(Player& player)
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

void ProfessorOak::ExplainMainQuest(Player& player)
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
