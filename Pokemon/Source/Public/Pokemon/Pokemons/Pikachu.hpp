#pragma once

#include "../Pokemon.hpp"

class Pikachu : public Pokemon
{
private:
	void Attack(Pokemon* AttackedPokemon) override;

public :
	Pikachu();
};