#include "BattleManager.hpp"
#include "Player.hpp"
#include "Utility.hpp"
#include <iostream>
using namespace std;

void BattleManager::StartBattle(Player& player, Pokemon& wildPokemon)
{
	cout << "A wild " << wildPokemon.Name << " appeared!\n";
	cout << "Go " << player.ChosenPokemon.Name << "!\n";
	Battle(player, wildPokemon);
}

void BattleManager::Battle(Player& player, Pokemon& wildPokemon)
{
	while (!player.ChosenPokemon.IsFainted() && !wildPokemon.IsFainted())
	{
		player.ChosenPokemon.Attack(wildPokemon);
		if (wildPokemon.IsFainted())
		{
			break;
		}
		wildPokemon.Attack(player.ChosenPokemon);
	}
	HandleBattleOutcome(player, wildPokemon, !player.ChosenPokemon.IsFainted());
}

void BattleManager::HandleBattleOutcome(Player& player, Pokemon& wildPokemon, bool playerWon)
{
	if (playerWon)
	{
		cout << wildPokemon.Name << " has fainted!\n";
		cout << player.ChosenPokemon.Name << " won the battle! Keep an eye on your Pokemon's health.\n";
		Utility::WaitForEnter();
	}
	else
	{
		cout << "Bad Luck! " << player.ChosenPokemon.Name << " fainted! Visit the PokeCenter ASAP!\n";
		cout << "Game Over!";
		Utility::WaitForEnter();
	}
}
