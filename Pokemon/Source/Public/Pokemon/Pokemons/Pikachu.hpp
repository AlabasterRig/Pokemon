#pragma once

#include "../Pokemon.hpp"

class Pikachu : public Pokemon
{
private:
	void ThunderShock(Pokemon& AttackedPokemon);

public :
	Pikachu();
};