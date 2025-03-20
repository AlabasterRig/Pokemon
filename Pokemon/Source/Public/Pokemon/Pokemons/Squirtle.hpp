#include "../Pokemon.hpp"

class Squirtle : public Pokemon
{
private:
	void Attack(Pokemon* AttackedPokemon) override;

public:
	Squirtle();
};