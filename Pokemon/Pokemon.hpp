#include <string>
using namespace std;

enum class PokemonType;

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