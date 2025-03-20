#include "../Pokemon.hpp"

class Bulbasaur : public Pokemon
{
private:
	void Attack(Pokemon& AttackedPokemon);

public:
	Bulbasaur();
};