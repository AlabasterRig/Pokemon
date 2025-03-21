#include "../Pokemon/Source/Public/Character/Player/Player.hpp"
#include "../Pokemon/Source/Public/Main/Game.hpp"
#include "../Pokemon/Source/Public/Pokemon/EPokemonType.hpp"
#include "../Pokemon/Source/Public/Character/ProfessorOak.hpp"
#include "../Pokemon/Source/Public/Utility/Utility.hpp"
#include "../Pokemon/Source/Public/Pokemon/Pokemon.hpp"
#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main()
{
	Pokemon* pokemon = new Pokemon("Pikachu", PokemonType::Electric, 100, 10);
	Player* player = new Player("Trainer");
	ProfessorOak* professorOak = new ProfessorOak();

	professorOak->Name = "Professor Oak";

	professorOak->GreetPlayer();
	professorOak->OfferPokemon(player);
	professorOak->ExplainMainQuest(player);

	Game* game = new Game();
	game->GameLoop(player);

	delete(pokemon);
	delete(player);
	delete(professorOak);
	delete(game);

	return 0;
}