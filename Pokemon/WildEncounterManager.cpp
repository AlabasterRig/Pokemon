#include "WildEncounterManager.hpp"
#include "FGrass.hpp"
#include <cstdlib>
#include <ctime>
#include "Pokemon.hpp"

WildEncounterManager::WildEncounterManager()
{
	srand(time(0));
}

Pokemon WildEncounterManager::GetRandomPokemonFromGrass(const Grass& grass)
{
	int RandomIndex = rand() % grass.WildPokemonList.size();
	return grass.WildPokemonList[RandomIndex];
}
