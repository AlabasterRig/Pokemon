#include "../Pokemon.hpp"

class Caterpie : public Pokemon
{
private:
	void Attack(Pokemon* AttackedPokemon) override;

public:
	Caterpie();
};