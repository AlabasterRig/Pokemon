#include "../../Public/Pokemon/Pokemon.hpp"
#include "../../Public/Pokemon/EPokemonType.hpp"
#include "../../Public/Utility/Utility.hpp"
#include <string>
#include <iostream>
using namespace std;

Pokemon::Pokemon()
{
	Name = "Unknown";
	Type = PokemonType::Normal;
	Health = 50;
	MaxHealth = 50;
	AttackPower = 10;
}

Pokemon::Pokemon(string name, PokemonType type, int health, int attackPower)
{
	Name = name;
	Type = type;
	Health = health;
	MaxHealth = health;
	AttackPower = attackPower;
}

Pokemon::Pokemon(Pokemon* other)
{
	Name = other->Name;
	Type = other->Type;
	Health = other->Health;
	MaxHealth = other->MaxHealth;
	AttackPower = other->AttackPower;
}

Pokemon::~Pokemon()
{
}

void Pokemon::Attack(Pokemon* AttackedPokemon)
{
	int damage = N_Utility::Utility::Randomize(AttackPower) + 5;
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
