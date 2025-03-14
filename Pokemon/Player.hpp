#include <string>
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