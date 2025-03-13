#include <iostream>
using namespace std;

enum PokemonChoice
{
	Bulbasaur,
	Charmander,
	Squirtle,
	Pikachu
};

int main() {

	cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
	cout << "What's your name?" << endl;

    string PlayerName;
	cout << "System: Enter your name: \n";
	cin >> PlayerName;

	cout << "Professor Oak: Hello " << PlayerName << "!" << endl;
	cout << "Professor Oak: I am Professor Oak.\n";
	cout << "Professor Oak: This world is inhabited by creatures called Pokemon!\n";
	cout << "Professor Oak: For some people, Pokemon are pets. Others use them for fights.\n";
	cout << "Professor Oak: Myself... I study Pokémon as a profession.\n";
	cout << "Professor Oak: Do you want to be a Pokemon Trainer?" << endl;
	cout << "Professor Oak: You can choose one of the following Pokémon:\n";
	cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
	cout << "System: Which Pokemon would you like to choose? Enter the number: ";

	int choice;
	cin >> choice;
	PokemonChoice ChosenPokemon;

	switch (choice) 
	{
	case 1:
		ChosenPokemon = Bulbasaur;
		break;

	case 2:
		ChosenPokemon = Charmander;
		break;

	case 3:
		ChosenPokemon = Squirtle;
		break;

	default:
		cout << "Professor Oak: Hmm... I think you dont want any of these, how about I give you one of my choice?" << endl;
		ChosenPokemon = Pikachu;
		break;
	}

	switch (ChosenPokemon)
	{
		case Bulbasaur:
			cout << "Professor Oak: Well done, " << PlayerName << "!" << endl;
			cout << "Professor Oak: You chose Bulbasaur! It is a Grass/Poison type Pokemon.\n";
			cout << "Professor Oak: An excellent choice!" << endl;
			cout << "Professor Oak: It evolves into Ivysaur at level 16.\n";
			cout << "Professor Oak: And then into Venusaur at level 32.\n";
			break;

		case Charmander:
			cout << "Professor Oak: Well done, " << PlayerName << "!" << endl;
			cout << "Professor Oak: You chose Charmander! It is a Fire type Pokemon.\n";
			cout << "Professor Oak: An excellent choice!" << endl;
			cout << "Professor Oak: It evolves into Charmeleon at level 16.\n";
			cout << "Professor Oak: And then into Charizard at level 36.\n";
			break;

		case Squirtle:
			cout << "Professor Oak: Well done, " << PlayerName << "!" << endl;
			cout << "Professor Oak: You chose Squirtle! It is a Water type Pokemon.\n";
			cout << "Professor Oak: An excellent choice!" << endl;
			cout << "Professor Oak: It evolves into Wartortle at level 16.\n";
			cout << "Professor Oak: And then into Blastoise at level 36.\n";
			break;

		case Pikachu:
			cout << "Professor Oak: Now this is a special one, it's an Electric type Pokemon,\n";
			cout << "Professor Oak: a bit of a troublemaker as it never goes back into the Pokeball\n";
			cout << "Professor Oak: It's name is Pikachu!" << endl;
			cout << "Professor Oak: I hope you like it!" << endl;
			break;
	}

	string PokemonName;

	switch (ChosenPokemon)
	{
		case Bulbasaur:
			PokemonName = "Bulbasaur";
			break;
		case Charmander:
			PokemonName = "Charmander";
			break;
		case Squirtle :
			PokemonName = "Squirtle";
			break;
		case Pikachu:
			PokemonName = "Pikachu";
			break;
	}

	cout << "Professor Oak: But make no mistake, " << PlayerName << ", this is only the beginning."  << endl;
	cout << "Professor Oak: The bond between you and " << PokemonName << " will grow stronger with each battle." << endl;
	cout << "Professor Oak: Your journey is about to unfold."  << endl;
	cout << "Professor Oak: Now let's see if you’ve got what it takes to keep going!" << endl;
	cout << "Professor Oak: Good luck!" << endl;

    return 0;
}
