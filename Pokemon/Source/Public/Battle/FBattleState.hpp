class Pokemon;
class Player;

struct BattleState
{
	Pokemon* PlayerPokemon;
	Pokemon* WildPokemon;
	bool PlayerTurn = true;
	bool BattleOngoing = true;
};