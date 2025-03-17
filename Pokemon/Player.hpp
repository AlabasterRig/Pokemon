#include <string>
#include "Pokemon.hpp"
using namespace std;

class Player
{
public:
	string Name;
	Pokemon ChosenPokemon;

	Player() 
	{

	}

	Player(string name, Pokemon chosenPokemon);

	Player(const Player& other);

	void ChoosePokemon(int choice);
};