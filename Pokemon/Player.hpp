#include <string>
#include "EPokemonType.hpp"
#include "EPokemonChoice.hpp"
using namespace std;

class Player
{
public:
	string Name;
	Pokemon ChosenPokemon;

	Player() 
	{

	}

	Player(std::string name, Pokemon chosenPokemon);

	Player(const Player& other);

	void ChoosePokemon(int choice);
};