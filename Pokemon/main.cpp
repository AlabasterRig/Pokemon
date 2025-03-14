#include <iostream>
using namespace std;

enum class PokemonChoice
{
	Bulbasaur,
	Charmander,
	Squirtle,
	Pikachu
};

enum class PokemonType
{
	Grass,
	Fire,
	Water,
	Electric,
	Earth
};

class Pokemon
{
public:
	string Name;
	PokemonType Type;
	int Health;

	Pokemon()
	{

	}

	Pokemon(string name, PokemonType type, int health)
	{
		Name = name;
		Type = type;
		Health = health;
	}

	void Attack()
	{
		cout << "Pokemon is attacking!" << endl;
	}
};

class Player
{
public:
	string Name;
	Pokemon ChosenPokemon;

	void ChoosePokemon(int choice)
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
	}
};

class ProfessorOak
{
public:
	string Name;

	void GreetPlayer(Player& player)
	{
		cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
		cout << "Professor Oak: I am Professor Oak.\n";
		cout << "Professor Oak: This world is inhabited by creatures called Pokemon!\n";
		cout << "Professor Oak: Myself... I study Pokémon as a profession.\n";
	}

	void OfferPokemon(Player& player)
	{
		string PlayerName;
		cout << "System: Before we begin, what’s your name, Trainer?\n";
		cin >> PlayerName;

		cout << "Professor Oak: Ah, so your name is " << PlayerName << "! A fine name indeed.\n";
		cout << "Professor Oak: In this vast world, Pokémon and humans live side by side, forging friendships and facing challenges together.\n";
		cout << "Professor Oak: Some people raise Pokémon as loyal companions, while others test their skills in thrilling battles.\n";
		cout << "Professor Oak: As for me, I’ve dedicated my life to studying these incredible creatures!\n";
		cout << "Professor Oak: But enough about me—let’s talk about you. Do you dream of becoming a Pokémon Trainer?\n";
		cout << "Professor Oak: If so, you'll need a partner to begin your journey.\n";
		cout << "Professor Oak: Here, you may choose one of these three Pokémon to accompany you:\n";
		cout << "1. Bulbasaur - A Grass-type with a calm and steady nature.\n";
		cout << "2. Charmander - A fiery and determined Fire-type.\n";
		cout << "3. Squirtle - A Water-type with a tough shell and a brave heart.\n";
		cout << "System: Which Pokémon will be your first companion? Enter the number of your choice: ";

		int choice;
		cin >> choice;
		player.ChoosePokemon(choice);
	}
};

int main() 
{
	Player player;
	ProfessorOak professorOak;
	
	player.Name = "Ash";

	professorOak.Name = "Professor Oak";

	professorOak.GreetPlayer(player);
	professorOak.OfferPokemon(player);

	cout << "Professor Oak: But make no mistake, " << player.Name << ", this is only the beginning."  << endl;
	cout << "Professor Oak: The bond between you and " << player.ChosenPokemon.Name << " will grow stronger with each battle." << endl;
	cout << "Professor Oak: Your journey is about to unfold."  << endl;
	cout << "Professor Oak: Now let's see if you've got what it takes to keep going!" << endl;
	cout << "Professor Oak: Good luck!" << endl;

    return 0;
}