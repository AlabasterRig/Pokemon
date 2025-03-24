#pragma once

#include "../Pokemon.hpp"

struct Move;

class Caterpie : public Pokemon
{
private:
	void Attack(Move SelectedMove, Pokemon* AttackedPokemon) override;

public:
	Caterpie();
};