#include "../Pokemon.hpp"

struct Move;

class Squirtle : public Pokemon
{
private:
	void Attack(Move SelectedMove, Pokemon* AttackedPokemon) override;

public:
	Squirtle();
};