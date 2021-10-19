#include <iostream>
#include <string>
#include <algorithm>
#include "GameInfo.h"
#include "CharactersInfo.h"

using namespace std;

//LAYOUT
//intro (obtain player character) ---- Done
//character specific intro (obtain player name) ----Done
//give option to continue or display stats or exit(loop format) ---Done
//Once continuing - player commentary before fight
//opponent responses
//Attack
//change stats after attack
//Continue or display new stats
//repeat until a character is expired
//character specific ending speech


int main()
{
    srand(time(0));
    string choice;
    Character myObj;
    int Health,randNum;
    GameDriver storyIntro;
    string characterChoice;
    string playerName;
    Ninja spy;
    Pirate matey;

    //Pirate commentary before the fight begins
    string pirateStuffToSay = "Simply remember my friend, dead men tell no tales. Good luck defeating me!";
    //Pirate commentary during the fight
    string pirateThreat = "When you lose, don't forget to feed the fishes!";
    //Ninja commentary before the fight begins
    string ninjaStuffToSay = "You have stolen what does not belong to you. Prepare to face the consequence of your decision.";
    //Ninja commentary during the fight!
    string ninjaThreat = "The dragon is with me, and you do NOT want to see it.";

    characterChoice = storyIntro.Intro();
    // convert string to upper case
    //I want to convert string to upper case so I have one thing to check
    //easier to check for one thing versus using || over and over again
    for_each(characterChoice.begin(), characterChoice.end(), [](char & a)
    {
        a = ::toupper(a);
    });

    if(characterChoice == "NINJA")
    {
        playerName = storyIntro.NinjaIntro();


        cout << "\nYour character stats are as follows: " << endl;
        myObj.DisplayStats(characterChoice, playerName);


        //Talk methods??
        int damages;
        myObj.Talk(ninjaStuffToSay);
        cout << "\nThe pirate simply grins."<< endl;
        randNum = storyIntro.RandomRoll();
        damages = spy.Attack(randNum);
        myObj.Talk(playerName,ninjaThreat);
        myObj.setter(damages);
        Health = myObj.getter();
        while(Health > 0)
        {
            cout << "\n\nYour health is now: " << myObj.getter() << endl;
            randNum = storyIntro.RandomRoll();
            damages = spy.Attack(randNum);
            if(damages == 1)
            {
                cout << "Opponents Health: 0 " << endl;
                cout << "You beat the pirate and retrieved the sacred item from the sleeping captains chambers" << endl;
                cout << "You have brought honor to your emperor, family, and country." << endl;
                cout << "Very well played " << playerName << endl;
                return 1;
            }
            myObj.setter(damages);
            Health = myObj.getter();
        }
        myObj.setter(100);
        cout << "Thank you for playing!";
    }

    if(characterChoice == "PIRATE") {
        playerName = storyIntro.PirateIntro();

        cout << "\nYour character stats are as follows: " << endl;
        myObj.DisplayStats(characterChoice, playerName);


        //Talk methods??
        int damages;
        myObj.Talk(pirateStuffToSay);
        cout << "\nThe ninja takes his battle stance."<< endl;
        randNum = storyIntro.RandomRoll();
        damages = matey.Attack(randNum);
        myObj.Talk(playerName,pirateThreat);
        myObj.setter(damages);
        Health = myObj.getter();
        while(Health > 0)
        {
            cout << "\n\nYour health is now: " << myObj.getter() << endl;
            randNum = storyIntro.RandomRoll();
            damages = matey.Attack(randNum);
            if(damages == 1)
            {
                cout << "Opponents Health: 0 " << endl;
                cout << "You beat the ninja and successfully stole the Japanese sacred item." << endl;
                cout << "You would have made your captain vey proud had he known of the affair." << endl;
                cout << "You will carry this victory with you forever."<< endl;
                cout << "Very well played " << playerName << endl;
                return 1;
            }
            myObj.setter(damages);
            Health = myObj.getter();
        }
        myObj.setter(100);
        cout << "Thank you for playing!";
    }

    //return to exit the program completely
    return 0;
}

