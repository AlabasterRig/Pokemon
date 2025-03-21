#pragma once
#include <vector>
#include <string>
using namespace std;

class Pokemon;

struct Grass 
{
    string EnvironmentType;
    vector<Pokemon*> WildPokemonList;
    int EncounterRate;

    Grass() : EnvironmentType("Unknown"), EncounterRate(0) {}

    Grass(string environmentType, vector<Pokemon*> wildPokemonList, int encounterRate)
    {
		EnvironmentType = environmentType;
		WildPokemonList = wildPokemonList;
		EncounterRate = encounterRate;
    }
};
