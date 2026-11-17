#include <iostream>
#include "Map.h"
#include "Actor.h"
#include "Character.h"

using namespace std;

string Prompt(string question);
void Pause();

int main()
{
    Character player = Character("Jesse", 3, 3, 100);
    Map myMap = Map(10, 10, &player);

    bool isPlaying = true;

    while (isPlaying)
    {
        system("cls");
        myMap.PrintMap();

        string choice;

        choice = Prompt("What would you like to do?");

        // react to the user's choice
        if (choice == "exit")
        {
            isPlaying = false;
            cout << "Thanks for playing. Exiting.\n";
        }
        else if (choice == "south")
        {
            cout << "Moving South\n";
            player.Move(player.PositionX, player.PositionY + 1);
        }

        Pause();
    }
}

void Pause()
{
    cout << "Press enter to continue...\n";
    cin.ignore();
    cin.get();
}

string Prompt(string question)
{
    cout << question << " ";

    string response = "";

    cin >> response;

    return response;
}