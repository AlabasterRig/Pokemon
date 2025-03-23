#pragma once

#include "../Pokemon.hpp"

struct Move;

class Pidgey : public Pokemon
{
private:
	void Attack(Move SelectedMove, Pokemon* AttackedPokemon) override;

public:
	Pidgey();
};