#include "../../Public/Battle/BattleManager.hpp"
#include "../../Public/Character/Player/Player.hpp"
#include <iostream>
using namespace std;

void BattleManager::StartBattle(Player& player, Pokemon& wildPokemon)
{
	CurrentBattleState.PlayerPokemon = &player.ChosenPokemon;
	CurrentBattleState.WildPokemon = &wildPokemon;
	CurrentBattleState.PlayerTurn = true;
	CurrentBattleState.BattleOngoing = true;

	cout << "A wild " << wildPokemon.Name << " appeared!\n";
	cout << "Go " << player.ChosenPokemon.Name << "!\n";
	Battle();
}

void BattleManager::Battle()
{
	while (CurrentBattleState.BattleOngoing)
	{
		if (CurrentBattleState.PlayerTurn)
		{
			CurrentBattleState.PlayerPokemon->Attack(*CurrentBattleState.WildPokemon);
		}
		else
		{
			CurrentBattleState.WildPokemon->Attack(*CurrentBattleState.PlayerPokemon);
		}

		UpdateBattleState();

		CurrentBattleState.PlayerTurn = !CurrentBattleState.PlayerTurn;
	}

	HandleBattleOutcome();
}

void BattleManager::HandleBattleOutcome()
{
	if (CurrentBattleState.PlayerPokemon->IsFainted())
	{
		cout << "Your " << CurrentBattleState.PlayerPokemon->Name << " has fainted! Rush to the nearest PokeCenter to heal your Pokemon!\n";
	}
	else 
	{
		cout << "You defeated the wild " << CurrentBattleState.WildPokemon->Name << "! Keep an eye on your Pokemon's health.\n";
	}
}

void BattleManager::UpdateBattleState()
{
	if (CurrentBattleState.PlayerPokemon->IsFainted())
	{
		CurrentBattleState.BattleOngoing = false;
	}
	else if (CurrentBattleState.WildPokemon->IsFainted())
	{
		CurrentBattleState.BattleOngoing = false;
	}
}
