#pragma once

#include "../Pokemon.hpp"

class Pidgey : public Pokemon
{
private:
	void WingAttack(Pokemon& AttackedPokemon);

public:
	Pidgey();
};