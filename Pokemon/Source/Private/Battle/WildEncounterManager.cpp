#include "../../Public/Battle/WildEncounterManager.hpp"
#include "../../Public/Pokemon/FGrass.hpp"
#include "../../Public/Pokemon/Pokemon.hpp"
#include <cstdlib>
#include <ctime>

WildEncounterManager::WildEncounterManager()
{
	srand(time(0));
}

Pokemon* WildEncounterManager::GetRandomPokemonFromGrass(Grass& grass)
{
	int RandomIndex = rand() % grass.WildPokemonList.size();
	Pokemon* wildPokemon = grass.WildPokemonList[RandomIndex];
	return wildPokemon;
}
