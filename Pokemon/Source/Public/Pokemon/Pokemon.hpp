#pragma once

#include <string>
#include <vector>
using namespace std;

enum class PokemonType;
struct Move;

class Pokemon
{
public:
	string Name;
	PokemonType Type;
	int Health;
	int MaxHealth = 100;
	int AttackPower = 10;
	vector<Move> Moves;

	Pokemon();

	Pokemon(string name, PokemonType type, int health, vector<Move>moves);

	Pokemon(Pokemon* other);

	~Pokemon();

	virtual void Attack(Move SelectedMove, Pokemon* AttackedPokemon);
	void TakeDamage(int damage);
	bool IsFainted() const;
	void Heal();
	void SelectAndUseMove(Pokemon* TargetPokemon);

protected:
	void PrintAvailableMoves();
	int SelectMove();
	void UsedMove(Move SelectedMove, Pokemon* target);
};