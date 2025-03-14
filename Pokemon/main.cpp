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

void ClearConsole() 
{
#ifdef _WIN32
	system("cls");
#else
	(void)system("clear");
#endif
}

void WaitForEnter()
{
	cin.get();
}

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
		cout << "System: You have chosen " << ChosenPokemon.Name << " as your first Pokemon!\n";
	}
};

class ProfessorOak
{
public:
	string Name;

	void GreetPlayer(Player& player)
	{
		cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
		WaitForEnter();
		cout << "Professor Oak: I am Professor Oak.\n";
		WaitForEnter();
	}

	void OfferPokemon(Player& player)
	{
		cout << "Professor Oak: Before we begin, what's your name, Trainer?\n";
		cout << "System: Enter your name: ";
		cin >> player.Name;

		cout << "Professor Oak: Ah, so your name is " << player.Name << "! A fine name indeed.\n";
		WaitForEnter();
		cout << "Professor Oak: In this vast world, Pokemon and humans live side by side, forging friendships and facing challenges together.\n";
		WaitForEnter();
		cout << "Professor Oak: Some people raise Pokemon as loyal companions, while others test their skills in thrilling battles.\n";
		WaitForEnter();
		cout << "Professor Oak: As for me, I’ve dedicated my life to studying these incredible creatures!\n";
		WaitForEnter();
		cout << "Professor Oak: But enough about me-let's talk about you. Do you dream of becoming a Pokemon Trainer?\n";
		WaitForEnter();
		cout << "Professor Oak: If so, you'll need a partner to begin your journey.\n";
		WaitForEnter();
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
		ClearConsole();
		cout << "Professor Oak: Congratulations, " << player.Name << "! You've chosen " << player.ChosenPokemon.Name << "!" << endl;
		WaitForEnter();
		cout << "Professor Oak: But make no mistake, " << player.Name << ", this is only the beginning." << endl;
		WaitForEnter();
		cout << "Professor Oak: Oak - ay " << player.Name << ", I am about to explain you about your upcoming grand adventure." << endl;
		WaitForEnter();
		cout << "Professor Oak: You see, becoming a Pokemon Master is no easy feat. It takes courage, wisdom, and a bit of luck." << endl;
		WaitForEnter();
		cout << "Professor Oak:  Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokemon Badges and conquer the Pokemon League." << endl;
		WaitForEnter();
		cout << player.Name << ": Wait... that sounds a lot like every other Pokemon game out there." << endl;
		WaitForEnter();
		cout << "Professor Oak:  Shhh! Don't break the fourth wall" << player.Name << "! This is serious business." << endl;
		WaitForEnter();
		cout << "Professor Oak:  To achieve this, you'll need to battle wild Pokemon, challenge gym leaders, and of course, keep your Pokemon healthy at the PokeCenter." << endl;
		WaitForEnter();
		cout << "Professor Oak:   Along the way, you'll capture new Pokemon to strengthen your team. Just remember—there's a limit to how many Pokemon you can carry, so choose wisely!" << endl;
		WaitForEnter();
		cout << player.Name << ": Sounds like a walk in the park... right?" << endl;
		WaitForEnter();
		cout << "Professor Oak: Hah! That's what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let's just say you'll be starting from square one." << endl;
		WaitForEnter();
		cout << "Professor Oak: So, what do you say? Are you ready to become the next Pokemon Champion?\n";
		WaitForEnter();
		cout << player.Name << ": Ready as I'll ever be, Professor!\n";
		WaitForEnter();
		cout << "Professor Oak: That's the spirit! Now, your journey begins.";
		WaitForEnter();
	}
};

int main() 
{
	Player player;
	ProfessorOak professorOak;

	professorOak.Name = "Professor Oak";

	professorOak.GreetPlayer(player);
	professorOak.OfferPokemon(player);
	professorOak.ExplainMainQuest(player);

    return 0;
}