#include <string>
using namespace std;

enum class PokemonType;

class Pokemon
{
public:
	string Name;
	PokemonType Type;
	int Health;
	int MaxHealth = 100;
	int AttackPower = 10;

	Pokemon();

	Pokemon(string name, PokemonType type, int health);

	~Pokemon();

	void Attack(Pokemon& AttackedPokemon);
	void TakeDamage(int damage);
	bool IsFainted() const;
	void Heal();
};