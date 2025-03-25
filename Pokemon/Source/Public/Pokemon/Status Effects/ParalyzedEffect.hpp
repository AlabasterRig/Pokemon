#include "IStatusEffect.hpp"

class ParalyzedEffect : public IStatusEffect
{
private:
	int TurnsLeft;

public:
    void ApplyEffect(Pokemon* target) override;
    std::string GetEffectName() override;
    bool TurnEndEffect(Pokemon* target) override;
    void ClearEffect(Pokemon* target) override;
};