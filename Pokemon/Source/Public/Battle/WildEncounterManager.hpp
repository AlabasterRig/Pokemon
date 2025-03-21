#include <vector>
using namespace std;

struct Grass;
class Pokemon;

class WildEncounterManager
{
public:
	WildEncounterManager();

	Pokemon* GetRandomPokemonFromGrass(Grass& grass);
};