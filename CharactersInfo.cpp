#include "CharactersInfo.h"
#include "GameInfo.h"
#include <string>
#include <utility>

using namespace std;

//create methods and objects fully in this file

void Character::DisplayStats(string characterClass, string playerName)
{
    name = playerName;
    int numOfWeapons;
    string weapon;
    if(characterClass == "NINJA")
    {
        characterClass = " " + characterClass;
        weapon = " Throwing Stars ";
        numOfWeapons = 5;
    } else if(characterClass == "PIRATE")
    {
        weapon = "Sword and Dagger";
        numOfWeapons = 2;
    }


    cout << " ______________________________________________ " << endl;
    cout << "| " << name << "                                  "<<characterClass<<"  |" << endl;
    cout << "|                                              |" << endl;
    cout << "| Health                                  "<<Health<<"  |" << endl;
    cout << "|                                              |" << endl;
    cout << "| Weapon                      "<<weapon<<" |" << endl;
    cout << "|                                              |" << endl;
    cout << "| # of Weapons                              "<<numOfWeapons<<"  |" << endl;
    cout << "|                                              |" << endl;
    cout << "|______________________________________________|" << endl;


}

//The next two Talk methods are named the same but have different parameters
//This is an example of polymorphism


void Character::Talk(string stuffToSay)  //Perhaps this method is dedicated for threat commentary
{
    cout << "\nI am " << name << "!" << endl;
    cout << stuffToSay;
}
void Character::Talk(string Name, string stuffToSay)  //perhaps this will be commentary before the attack
{
    cout << "\nI am " << Name << endl;
    cout << stuffToSay;
}
int Character::Attack(int randNum) //return 25 hit points
{

    return 1;
}
int Character::getter() // access health which is a private property in the Character class. Only Character can access
{
    int currentHealthChecked;
    currentHealthChecked = Health;

    return currentHealthChecked;
}
void Character::setter(int newHealthValue) //update health but first check if health is or will be less than 0
{
    if( (Health - newHealthValue) < 0 )
    {
        Health = 0;
        cout << "\nOh no! Your health has reached " << Health << ". Your character has expired." << endl;
    }
    else
    {
        Health = Health - newHealthValue;
    }
}
void Character::help()
{
    //be overridden and empty
}


//
//This large space to help separate Character class methods from Ninja class methods
//

void Ninja::ThrowStars() // character specific fighting style
{
    cout << "\nYou throw your throwing stars!";
}
Ninja::Ninja() // constructor
{
    Health = 100;
    oppHealth = 100;

}
void Ninja::help() //help is in the GameStructure class, Ninja overrides GameStructure help method
{
    cout << "Ninjas are known for their excellent throwing star skills. Try throwing your stars." << endl;
}
int Ninja::Attack(int randNum)
{
    int opponentDamage = 0;
    int damages = 0;
    //the randNum is a number sent from the randomRoll method in GameDriver method
    //create if statement to determine which storyline to go with
    //this isn't needed but creates a sense of random within the story
    //if statement is simply to see if the randNum is %2 == 0 or not (even or odd)
    //even lands a hit, odd misses the target.
    if( (randNum % 2) == 0)
    {
        cout << "\nHe lunges as fast as he can! Swiftly, you grab your throwing stars." << endl;
        ThrowStars();
        cout << "\nYou throw a star towards the pirate and cut his cheek!";
        cout << "\nYou were able to dodge the pirates attack no problem." << endl;
        cout << "\nYou dealt 25 damage, received no damage points." << endl;
        opponentDamage += 25;
        oppHealth -= opponentDamage;
        if(oppHealth < 0)
        {
            return 1;
        }
        cout << "\nOpponent Health: " << oppHealth << endl;
        return damages;
    } else
    {
        cout << "\nHe lunges as fast as he can! Swiftly, you grab your throwing stars." << endl;
        ThrowStars();
        cout << "\nYou throw a star towards the pirate and he dodges just in time.";
        cout << "\nWhile reaching for another throwing star, the pirates sword cuts your arm." << endl;
        cout << "\nYou dealt 0 damage, received  25 damage points." << endl;
        damages += 25;
        cout << "\nOpponent Health: " << oppHealth << endl;
        return damages;
    }
}


//
//This large space to help separate Ninja class methods from Pirate class methods
//


void Pirate::UseSword() //character specific fighting style
{
    cout << "\nYou swoosh your sword and grip your dagger!" << endl;
}
Pirate::Pirate() // constructor
{
    Health = 100;
    oppHealth = 100;
}
void Pirate::help() // help is in GameStructure class, Pirate overrides help method
{
    cout << "Pirates are fierce with a sword and dagger! Try fighting with your sword or dagger!" << endl;
}
int Pirate::Attack(int randNum) // return 10 hit points
{
    //the randNum is a number sent from the randomRoll method in GameDriver method
    //create if statement to determine which storyline to go with
    //this isn't needed but creates a sense of random within the story
    //if statement is simply to see if the randNum is %2 == 0 or not (even or odd)
    //even lands a hit, odd misses the target.

    int opponentDamage = 0;
    int damages = 0;

    if( (randNum % 2) == 0)
    {
        cout << "\nUsing your sword, you lunge at the ninja. The ninja attempts to twist and dodge." << endl;
        cout << "\nLittle did he know, you had come prepared." << endl;
        UseSword();
        cout << "\nYou barely slashed the ninjas left arm, and cut his right forearm with your dagger." << endl;
        cout << "\nYou dealt 25 damage, received 0 damage points." << endl;
        opponentDamage += 25;
        oppHealth -= opponentDamage;
        if(oppHealth < 0)
        {
            return 1;
        }
        cout << "\nOpponent Health: " << oppHealth << endl;
        return damages;
    } else //ninja damages player
    {
        cout << "\nUsing your sword, you lunge at the ninja. The ninja attempts to twist and dodge." << endl;
        UseSword();
        cout << "\nThe ninja anticipated your attack and threw a throwing star towards you as he dodged.";
        cout << "\nYou take a step back in surprise as you feel pain on your cheek where the star hit you." << endl;
        cout << "\nYou dealt 0 damage, received  25 damage points." << endl;
        damages += 25;
        cout << "\nOpponent Health: " << oppHealth << endl;
        return damages;
    }
}

//
// Created by katie on 1/15/20.
//

