#include "../../Public/Pokemon/Pokemon.hpp"
#include "../../Public/Pokemon/EPokemonType.hpp"
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

Pokemon::~Pokemon()
{
}

void Pokemon::Attack(Pokemon& AttackedPokemon)
{
	int damage = AttackPower;
	cout << Name << " attacks " << AttackedPokemon.Name << "!\n";
	AttackedPokemon.TakeDamage(damage);
	cout << AttackedPokemon.Name << " took 10 damage!\n";}

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
