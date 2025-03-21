#include <string>
using namespace std;

class Pokemon;

class Player
{
public:
	string Name;
	Pokemon* ChosenPokemon = nullptr;

	Player();

	Player(string name);

	void ChoosePokemon(int choice);
};