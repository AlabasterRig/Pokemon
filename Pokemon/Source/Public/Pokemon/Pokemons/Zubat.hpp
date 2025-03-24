#include "../Pokemon.hpp"

struct Move;

class Zubat : public Pokemon
{
private:
	void Attack(Move SelectedMove, Pokemon* AttackedPokemon) override;

public:
	Zubat();
};