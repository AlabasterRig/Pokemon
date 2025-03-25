#include "../../../Public/Pokemon/Status Effects/ParalyzedEffect.hpp"
#include "../../../Public/Pokemon/Pokemon.hpp"
#include <iostream>

void ParalyzedEffect::ApplyEffect(Pokemon* target)
{
	std::cout << target->Name << " is paralyzed! It may not be able to move!\n";

	TurnsLeft = rand() % 3 + 1;
}

std::string ParalyzedEffect::GetEffectName()
{
	return "PARALYZED";
}

bool ParalyzedEffect::TurnEndEffect(Pokemon* target)
{
	if (TurnsLeft <= 0)
	{
		ClearEffect(target);
		return true;
	}

	int ParalysisChance = rand() % 4;
	if (ParalysisChance == 0)
	{
		std::cout << target->Name << " is paralyzed and can't move!\n";
		return false;
	}

	std::cout << target->Name << " shakes off the paralysis momentarily and can move!\n";
	return true;
}

void ParalyzedEffect::ClearEffect(Pokemon* target)
{
	std::cout << target->Name << " is no longer paralyzed!\n";
	target->ClearEffect();
}
