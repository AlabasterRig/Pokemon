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
	Earth,
	Normal
};

class Pokemon
{
public:
	string Name;
	PokemonType Type;
	int Health;

	Pokemon() 
	{
		Name = "Pikachu";
		Type = PokemonType::Electric;
		Health = 10;
	}

	Pokemon(string name, PokemonType type, int health)
	{
		Name = name;
		Type = type;
		Health = health;
	}

	Pokemon(const Pokemon& other) 
	{
		Name = other.Name;
		Type = other.Type;
		Health = other.Health;
	}

	~Pokemon() 
	{
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

	Player() {
		Name = "Trainer";
		ChosenPokemon = Pokemon();
	}

	Player(std::string name, Pokemon chosenPokemon) 
	{
		Name = name;
		ChosenPokemon = chosenPokemon;
	}

	Player(const Player& other)
	{
		Name = other.Name;
		ChosenPokemon = other.ChosenPokemon;
	}

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
		cout << "Professor Oak: Myself... I study Pokemon as a profession.\n";
	}

	void OfferPokemon(Player& player)
	{
		string PlayerName;
		cout << "System: Before we begin, what’s your name, Trainer?\n";
		cin >> PlayerName;

		cout << "Professor Oak: Ah, so your name is " << PlayerName << "! A fine name indeed.\n";
		cout << "Professor Oak: In this vast world, Pokemon and humans live side by side, forging friendships and facing challenges together.\n";
		cout << "Professor Oak: Some people raise Pokemon as loyal companions, while others test their skills in thrilling battles.\n";
		cout << "Professor Oak: As for me, I’ve dedicated my life to studying these incredible creatures!\n";
		cout << "Professor Oak: But enough about me—let’s talk about you. Do you dream of becoming a Pokemon Trainer?\n";
		cout << "Professor Oak: If so, you'll need a partner to begin your journey.\n";
		cout << "Professor Oak: Here, you may choose one of these three Pokemon to accompany you:\n";
		cout << "1. Bulbasaur - A Grass-type with a calm and steady nature.\n";
		cout << "2. Charmander - A fiery and determined Fire-type.\n";
		cout << "3. Squirtle - A Water-type with a tough shell and a brave heart.\n";
		cout << "System: Which Pokemon will be your first companion? Enter the number of your choice: ";

		int choice;
		cin >> choice;
		player.ChoosePokemon(choice);
	}
};

int main() 
{
	Player player;
	ProfessorOak professorOak;

	Pokemon DefaultPokemon;
	Pokemon Charmander("Charmander", PokemonType::Fire, 100);

	cout << "DEFAULT POKEMON: " << DefaultPokemon.Name << ", " << (int)DefaultPokemon.Type << endl;
	cout << "Charmander: " << Charmander.Name << ", " << (int)Charmander.Type << endl;

	Pokemon bulbasaur("Bulbasaur", PokemonType::Grass, 100);
	Pokemon bulbasaurCopy = bulbasaur;
	cout << "Original Pokemon Health: " << bulbasaur.Health << "\n";
	cout << "Copied Pokemon Health: " << bulbasaurCopy.Health << "\n";

	bulbasaurCopy.Health = 80;
	cout << "After Modification:\n";
	cout << "Original Pokemon Health: " << bulbasaur.Health << "\n";
	cout << "Copied Pokemon Health: " << bulbasaurCopy.Health << "\n";

	{
		Pokemon squirtle("Squirtle", PokemonType::Water, 100);
	}
	
	player.Name = "Ash";

	professorOak.Name = "Professor Oak";

	professorOak.GreetPlayer(player);
	professorOak.OfferPokemon(player);

	cout << "Professor Oak: Congratulations, " << player.Name << "! You've chosen " << player.ChosenPokemon.Name << " as your first Pokemon!\n";
	cout << "Professor Oak: But make no mistake, " << player.Name << ", this is only the beginning."  << endl;
	cout << "Professor Oak: The bond between you and " << player.ChosenPokemon.Name << " will grow stronger with each battle." << endl;
	cout << "Professor Oak: Your journey is about to unfold."  << endl;
	cout << "Professor Oak: Now let's see if you've got what it takes to keep going!" << endl;
	cout << "Professor Oak: Good luck!" << endl;

    return 0;
}