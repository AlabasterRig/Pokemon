#include <string>
#include "EPokemonType.hpp"
using namespace std;

class Pokemon
{
public:
	string Name;
	PokemonType Type;
	int Health;

	Pokemon();

	Pokemon(string name, PokemonType type, int health);

	Pokemon(const Pokemon& other);

	~Pokemon();

	void Attack();
};