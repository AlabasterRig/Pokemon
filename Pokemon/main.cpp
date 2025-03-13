#include <iostream>
using namespace std;

int main() {

    string PlayerName;
	cout << "Enter your name: ";
	cin >> PlayerName;

	cout << "Hello " << PlayerName << "!" << endl;
	cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
	cout << "You can choose one of the following Pokémon:\n";
	cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
	cout << "Which Pokémon would you like to choose? Enter the number: ";

	int choice;
	cin >> choice;

	cout << "Well done, Trainer!" << endl;
	cout << "But… wait, you think your journey ends with just choosing a Pokémon?" << endl;
	cout << "No, no, no!" << endl;
	cout << "You need to confirm your choice and see how the game reacts!" << endl;

	switch (choice) 
	{
	case 1:
		cout << "You chose Bulbasaur! It is a Grass/Poison type Pokémon.\n";
		break;
	case 2:
		cout << "You chose Charmander! It is a Fire type Pokémon.\n";
		break;
	case 3:
		cout << "You chose Squirtle! It is a Water type Pokémon.\n";
		break;
	default:
		cout << "Invalid choice! You have to choose a number between 1 and 3.\n";
		break;
	}

	cout << "Ah, an excellent choice!"  << endl;
	cout << "But beware, Trainer,"  << endl;
	cout << "this is only the beginning."  << endl;
	cout << "Your journey is about to unfold."  << endl;
	cout << "Now let's see if you’ve got what it takes to keep going!" << endl;
	cout << "Good luck, and remember… Choose wisely!" << endl;

    return 0;
}
