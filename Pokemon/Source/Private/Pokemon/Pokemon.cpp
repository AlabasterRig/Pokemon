#include "../../Public/Pokemon/Pokemon.hpp"
#include "../../Public/Pokemon/EPokemonType.hpp"
#include "../../Public/Utility/Utility.hpp"
#include "../../Public/Pokemon/FMove.hpp"
#include "../../Public/Pokemon/Status Effects/ParalyzedEffect.hpp"
#include <string>
#include <iostream>
using namespace std;

Pokemon::Pokemon()
{
	Name = "Unknown";
	Type = PokemonType::Normal;
	Health = 50;
	MaxHealth = 50;
	Moves = { Move("Tackle", 10) };
}

Pokemon::Pokemon(string name, PokemonType type, int health, vector<Move> moves)
{
	Name = name;
	Type = type;
	Health = health;
	MaxHealth = health;
	Moves = moves;
}

Pokemon::Pokemon(Pokemon* other)
{
	Name = other->Name;
	Type = other->Type;
	Health = other->Health;
	MaxHealth = other->MaxHealth;
	Moves = other->Moves;
}

Pokemon::~Pokemon()
{
}

void Pokemon::Attack(Move SelectedMove, Pokemon* AttackedPokemon)
{
	int damage = N_Utility::Utility::Randomize(SelectedMove.Power) + 5;
	cout << Name << " attacks " << AttackedPokemon->Name << "!\n";
	N_Utility::Utility::WaitForEnter();
	AttackedPokemon->TakeDamage(damage);
	cout << AttackedPokemon->Name << " took " << damage << " damage!\n";
	std::cout << AttackedPokemon->Name << "'s current health: " << AttackedPokemon->Health << "/" << AttackedPokemon->MaxHealth << "\n";
	N_Utility::Utility::WaitForEnter();
}

void Pokemon::TakeDamage(int damage)
{
	Health -= damage;
	if (Health < 0)
	{
		Health = 0;
	}
}

bool Pokemon::IsFainted() const
{
	return Health <= 0;
}

void Pokemon::Heal()
{
	Health = MaxHealth;
}

void Pokemon::PrintAvailableMoves()
{
	cout << Name << "'s available moves:\n";
	for (size_t i = 0; i < Moves.size(); ++i) 
	{
		cout << i + 1 << ": " << Moves[i].Name << " (Power: " << Moves[i].Power << ")\n";
	}
}

int Pokemon::SelectMove()
{
	int choice;
	cout << "Select a move: ";
	cin >> choice;

	while (choice < 1 || choice > Moves.size())
	{
		cout << "Invalid choice! Please select a valid move: ";
		cin >> choice;
	}

	return choice;
}

void Pokemon::UsedMove(Move SelectedMove, Pokemon* target)
{
	cout << Name << " used " << SelectedMove.Name << " on " << target->Name << "\n";
	Attack(SelectedMove, target);
	N_Utility::Utility::WaitForEnter();
	cout << "...\n";
	N_Utility::Utility::WaitForEnter();

	if (target->IsFainted())
		cout << target->Name << " fainted!\n";
	else
		cout << target->Name << " has " << target->Health << " HP left.\n";
}

void Pokemon::SelectAndUseMove(Pokemon* TargetPokemon)
{
	PrintAvailableMoves();

	// Input player's choice
	int choice = SelectMove();
	Move selectedMove = Moves[choice - 1];

	// Execute the move
	UsedMove(selectedMove, TargetPokemon);
}

bool Pokemon::CanAttack()
{
	if (AppliedEffect == nullptr)
	{
		return true;
	}
	else
	{
		return AppliedEffect->TurnEndEffect(this);
	}
}

void Pokemon::ClearEffect()
{
	AppliedEffect = nullptr;
}

bool Pokemon::CanApplyEffect()
{
	return { AppliedEffect == nullptr };
}

void Pokemon::ApplyEffect(EStatusEffectType EffectToApply)
{
	switch (EffectToApply)
	{
	case EStatusEffectType::PARALYZED:
		AppliedEffect = new ParalyzedEffect();
		AppliedEffect->ApplyEffect(this);
		break;
	default:
		AppliedEffect = nullptr;
	}
}
