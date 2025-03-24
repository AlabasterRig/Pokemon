#pragma once

#include <string>
using namespace std;

struct Move
{
public:
	string Name;
	int Power;

	Move(string name, int power)
	{
		Name = name;
		Power = power;
	}
};