#include <iostream>
#include "Map.h"

using namespace std;

int main()
{
    Map myMap = Map(10, 10);

    bool isPlaying = true;

    while (isPlaying)
    {
        system("cls");
        myMap.PrintMap();

        // prompt the user
        cin.get();

        // react to the user's choice
    }
}