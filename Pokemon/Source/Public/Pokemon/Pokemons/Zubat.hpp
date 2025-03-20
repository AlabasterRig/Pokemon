#include "../Pokemon.hpp"

class Zubat : public Pokemon
{
private:
	void Attack(Pokemon* AttackedPokemon) override;

public:
	Zubat();
};