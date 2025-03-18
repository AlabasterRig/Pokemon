class Pokemon;
class Player;

class BattleManager
{
public:
	void StartBattle(Player& player, Pokemon& wildPokemon);
	void Battle(Player& player, Pokemon& wildPokemon);
	void HandleBattleOutcome(Player& player, Pokemon& wildPokemon, bool playerWon);
};