#include "../../Public/Utility/Utility.hpp"
#include <limits>
#include <iostream>
using namespace std;

namespace N_Utility
{
    void Utility::ClearConsole()
    {
    #ifdef _WIN32
        system("cls");
    #else
        (void)system("clear");
    #endif
    }

    void Utility::WaitForEnter()
    {
        cin.get();
    }

    void Utility::ClearInputBuffer() {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    void Utility::InitRandom()
    {
        srand(time(0));
    }

    int Utility::Randomize(int value)
    {
        int RandomNumber = rand() % value;
        return RandomNumber;
    }
}