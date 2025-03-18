#include "../Pokemon.hpp"

class Caterpie : public Pokemon
{
public:
	Caterpie();
	void Tackle(Pokemon& AttackedPokemon);
};