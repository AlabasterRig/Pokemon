#pragma once

#include <string>

class Pokemon;

class IStatusEffect
{
public:
	virtual void ApplyEffect(Pokemon* target) = 0;
	virtual std::string GetEffectName() = 0;
	virtual bool TurnEndEffect(Pokemon* target) = 0;
	virtual void ClearEffect(Pokemon* target) = 0;
	virtual ~IStatusEffect() = default;
};