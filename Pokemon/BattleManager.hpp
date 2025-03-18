#include "FBattleState.hpp"

class Pokemon;
class Player;

class BattleManager
{
private:
	BattleState CurrentBattleState;

	void Battle();
	void HandleBattleOutcome();
	void UpdateBattleState();

public:
	void StartBattle(Player& player, Pokemon& wildPokemon);
};