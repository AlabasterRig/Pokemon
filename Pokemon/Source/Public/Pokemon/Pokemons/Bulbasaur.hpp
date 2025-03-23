#include "../Pokemon.hpp"

struct Move;

class Bulbasaur : public Pokemon
{
private:
	void Attack(Move SelectedMove, Pokemon* AttackedPokemon) override;

public:
	Bulbasaur();
};