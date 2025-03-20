#include "../Pokemon.hpp"

class Charmander : public Pokemon
{
private:
	void Attack(Pokemon& AttackedPokemon);

public:
	Charmander();
};