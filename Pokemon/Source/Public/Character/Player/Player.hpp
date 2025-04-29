#include <string>
#include "../../Pokemon/Pokemon.hpp"
using namespace std;

class Player
{
public:
	string Name;
	Pokemon ChosenPokemon;

	Player();

	Player(string name, Pokemon chosenPokemon);

	void ChoosePokemon(int choice);
};