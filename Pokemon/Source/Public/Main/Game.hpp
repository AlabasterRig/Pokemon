#include "../Pokemon/FGrass.hpp"

class Player;

class Game
{
private: 
	Grass ForestGrass;
	Grass CaveGrass;
	Pokemon* WildPokemon;

public:

	Game();
	~Game();

	void GameLoop(Player* player);
		
};