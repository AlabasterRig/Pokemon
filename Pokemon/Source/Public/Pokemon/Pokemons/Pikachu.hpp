#pragma once

#include "../Pokemon.hpp"

class Pikachu : public Pokemon
{
public :
	Pikachu();
	void ThunderShock(Pokemon& AttackedPokemon);
};