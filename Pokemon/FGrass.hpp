#include <vector>
#include <string>
using namespace std;

class Pokemon;

struct Grass {
	vector<Pokemon> WildPokemonList;
	int EncounterRate = 0;
	string EnvironmentType;
};