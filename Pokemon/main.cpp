#include "Player.hpp"
#include "Game.hpp"
#include "EPokemonChoice.hpp"
#include "EPokemonType.hpp"
#include "ProfessorOak.hpp"
#include "Utility.hpp"
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