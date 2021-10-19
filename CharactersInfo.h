#ifndef PIRATES_VS_NINJAS_CHARACTERSINFO_H
#define PIRATES_VS_NINJAS_CHARACTERSINFO_H
#include <string>
#include <iostream>
#include "GameInfo.h"

using namespace std;

class Character : public GameStructure//inherits from GameStructure
{
    public:
        void DisplayStats(string characterClass, string playerName);
        void Talk(string stuffToSay);
        void Talk(string name, string stuffToSay);
        virtual int Attack(int randNum); //return 25 hit points
        string name;
        int opponentHealth,numOfWeapons;
        int getter(); // access health
        void setter(int newHealthValue); //update health
        void help() override;

    protected:
        int Health = 100;
};

class Ninja : private Character //inherits from Character
{
public:
        int oppHealth;
        void ThrowStars();
        Ninja();
        void help() override;
        int Attack(int randNum) override;  //return 10 hit points

    private:
        //no private properties in class Ninja
};

class Pirate : private Character // class Pirate inherits from Character
{
    public:
        int oppHealth;
        void UseSword();
        Pirate();
        void help() override;
        int Attack(int randNum) override; //return 10 hit points

    private:
        //no private properties in class Pirate
};


//
// Created by katie on 1/15/20.
//
#endif //PIRATES_VS_NINJAS_CHARACTERSINFO_H
