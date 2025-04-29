#include "../Pokemon/Source/Public/Character/Player/Player.hpp"
#include "../Pokemon/Source/Public/Main/Game.hpp"
#include "../Pokemon/Source/Public/Pokemon/EPokemonType.hpp"
#include "../Pokemon/Source/Public/Character/ProfessorOak.hpp"
#include "../Pokemon/Source/Public/Utility/Utility.hpp"
#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main()
{
	Pokemon pokemon("Pikachu", PokemonType::Electric, 100);
	Player player("Trainer", pokemon);
	ProfessorOak professorOak;

	professorOak.Name = "Professor Oak";

	professorOak.GreetPlayer(player);
	professorOak.OfferPokemon(player);
	professorOak.ExplainMainQuest(player);

	Game game;
	game.GameLoop(player);

	return 0;
}