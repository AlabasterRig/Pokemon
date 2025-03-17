#include "BattleManager.hpp"
#include "Pokemon.hpp"
#include <iostream>
using namespace std;

void BattleManager::Battle(Pokemon& playerPokemon, Pokemon& wildPokemon)
{
	while (!playerPokemon.IsFainted() && !wildPokemon.IsFainted())
	{
		playerPokemon.Attack(wildPokemon);
		if (wildPokemon.IsFainted())
		{
			cout << "The wild " << wildPokemon.Name << " fainted!\n";
			break;
		}
		wildPokemon.Attack(playerPokemon);
		if (playerPokemon.IsFainted())
		{
			cout << "Your " << playerPokemon.Name << " fainted!\n";
			break;
		}
	}
}
