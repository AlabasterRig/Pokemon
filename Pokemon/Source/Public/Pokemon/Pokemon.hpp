#pragma once

#include "../Pokemon/Status Effects/IStatusEffect.hpp"
#include "../Pokemon/Status Effects/EStatusEffectType.hpp"
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
	IStatusEffect* AppliedEffect;

	Pokemon();

	Pokemon(string name, PokemonType type, int health, vector<Move>moves);

	Pokemon(Pokemon* other);

	~Pokemon();

	virtual void Attack(Move SelectedMove, Pokemon* AttackedPokemon);
	void TakeDamage(int damage);
	bool IsFainted() const;
	void Heal();
	void SelectAndUseMove(Pokemon* TargetPokemon);
	bool CanAttack();
	void ClearEffect();
	bool CanApplyEffect();
	void ApplyEffect(EStatusEffectType EffectToApply);

protected:
	void PrintAvailableMoves();
	int SelectMove();
	void UsedMove(Move SelectedMove, Pokemon* target);
};