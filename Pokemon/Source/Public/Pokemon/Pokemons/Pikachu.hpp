#pragma once

#include "../Pokemon.hpp"

struct Move;

class Pikachu : public Pokemon
{
private:
	void Attack(Move SelectedMove, Pokemon* AttackedPokemon) override;

public :
	Pikachu();
};