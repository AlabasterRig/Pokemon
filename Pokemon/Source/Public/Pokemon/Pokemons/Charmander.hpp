#include "../Pokemon.hpp"

struct Move;

class Charmander : public Pokemon
{
private:
	void Attack(Move SelectedMove, Pokemon* AttackedPokemon) override;

public:
	Charmander();
};