#include <vector>
#include <string>
using namespace std;

class Pokemon;

struct Grass {
	vector<Pokemon> WildPokemon;
	int EncounterRate;
	string EnvironmentType;
};

Grass ForestGrass = {
	{{"Pidgey", PokemonType::Normal, 40}, {"Caterpie", PokemonType::Bug, 35}},
	80,
	"Forest"
};

Grass CaveGrass = {
	{{"Zubat", PokemonType::Poison, 40}, {"Geodude", PokemonType::Earth, 35}},
	80,
	"Cave"
};