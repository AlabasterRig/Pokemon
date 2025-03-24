#include <iostream>
#include <string>
using namespace std;

class Player;

class ProfessorOak
{
public:
	string Name;

	void GreetPlayer();

	void OfferPokemon(Player* player);

	void ExplainMainQuest(Player* player);
};