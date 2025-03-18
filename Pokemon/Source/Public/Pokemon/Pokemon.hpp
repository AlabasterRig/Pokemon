#include <string>
using namespace std;

enum class PokemonType;

class Pokemon
{
protected:
	string Name;
	PokemonType Type;
	int Health;
	int MaxHealth = 100;
	int AttackPower = 10;

public:
	Pokemon();

	Pokemon(string name, PokemonType type, int health, int attackPower);

	~Pokemon();

	void Attack(Pokemon& AttackedPokemon);
	void TakeDamage(int damage);
	bool IsFainted() const;
	void Heal();
};