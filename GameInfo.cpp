#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <random>
#include "GameInfo.h"
#include "CharactersInfo.h"

using namespace std;

void GameStructure::help()
{
    //be virtual and empty
}

//
//This space is the separate GameStructure methods from GameDriver methods
//

string GameDriver::Intro()
{
    cout << "\n\n\t\t\t ***** Pirates VS Ninjas ******" << endl;
    cout << "\n\nThe pirates ship has found itself in a strange new land, we know this land as Japan."<< endl;
    cout << "\nThe captain of the ship has heard a legend of a mysterious item worth millions, if not trillions."<< endl;
    cout << "\nNaturally, your captain wants that item."<< endl;
    cout << "\nAfter days of searching, the crew finally found it!"<< endl;
    cout << "\nNow with the item stashed in the captains quarters on the ship, the emperor finds"<< endl;
    cout << "\nthe item missing and sends out his best men to retrieve it."<<endl;
    cout << "\nTo the Japanese, this item is a sacred symbol of their royalty." << endl;
    cout << "\nThey will spare no expense to ensure the protection of their beloved item." << endl;
    cout << "\nOnly a fight between Japan's best Ninjas and these Pirates will determine the future of this mysterious item."<<endl;
    cout << "\n\t\t\t        Who will prevail?       " << endl;
    cout << "\n\t Who would you like to play as? The Pirate or The Ninja?"<< endl;
    string characterChoice;
    cin >> characterChoice;
    return characterChoice;
}
int GameDriver::RandomRoll() //return a number >0 and < 101
{
    int num;
    num = rand() % 101;
    return num;
}
string GameDriver::PirateIntro()
{
    string name;
    cout << "\nYou have chosen the Pirate. Good choice matey." << endl;
    cout << "\nWhat is your first name?"<<endl;
    cin>>name;
    cout << "\nYou are given orders from your captain to begin getting the ship ready for sail in the morning." << endl;
    cout << "\nYou tend to the sails, and you make sure all the weapons are in the correct position." << endl;
    cout << "\nYou worked until nightfall when everyone else went to their quarters to sleep."<< endl;
    cout << "\nJust as you were about to head to your quarters, you get this feeling someone is watching you."<< endl;
    return name;
}
string GameDriver::NinjaIntro()
{
    string name;
    cout << "\nYou have chosen the Ninja. Good choice young spy." << endl;
    cout << "\nSay, what is your first name young spy?" << endl;
    cin>>name;
    cout << "\nYou have been hired by the emperor himself!"<<endl;
    cout << "\nThe emperor knows you will stop at nothing to ensure the safety of this sacred item." << endl;
    cout << "\n\nHiding in the trees, you watch the captain of the ship tuck the item away in his quarters." << endl;
    cout << "\nWaiting until night-time, you watch all but one of the pirates go below deck to sleep."<<endl;
    cout << "\nEnsuring that he is the only one, you jump and land on the deck." << endl;
    cout << "\nOn the opposite end of the deck, the pirate quickly turns around and draws his sword!" << endl;
    return name;
}

//
// Created by katie on 1/15/20.
//

