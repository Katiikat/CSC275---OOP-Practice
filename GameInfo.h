#ifndef PIRATES_VS_NINJAS_GAMEINFO_H
#define PIRATES_VS_NINJAS_GAMEINFO_H
#include <string>
#include <iostream>
#pragma once


using namespace std;

class GameStructure
{
    public:
        virtual void help();

    private:
        //no private properties
};

class GameDriver
{
    public:
        string Intro();
        string PirateIntro();
        string NinjaIntro();
        int RandomRoll();

    private:
        //no private properties
};

//
// Created by katie on 1/15/20.
//
#endif //PIRATES_VS_NINJAS_GAMEINFO_H
