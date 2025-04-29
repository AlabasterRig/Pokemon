#include "../Pokemon/FGrass.hpp"

class Player;

class Game
{
private: 
	Grass ForestGrass;
	Grass CaveGrass;

public:

	Game();

	void GameLoop(Player& player);
		
};