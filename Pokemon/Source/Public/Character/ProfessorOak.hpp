#include <iostream>
#include <string>
using namespace std;

class Player;

class ProfessorOak
{
public:
	string Name;

	void GreetPlayer(Player& player);

	void OfferPokemon(Player& player);

	void ExplainMainQuest(Player& player);
};