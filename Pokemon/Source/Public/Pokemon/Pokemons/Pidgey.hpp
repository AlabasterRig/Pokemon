#pragma once

#include "../Pokemon.hpp"

class Pidgey : public Pokemon
{
private:
	void Attack(Pokemon* AttackedPokemon) override;

public:
	Pidgey();
};