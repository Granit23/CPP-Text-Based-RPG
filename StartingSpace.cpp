/******************************************************************************
* Author: Granit Arifi
* Date: 11/20/2018
* Description: Derived class from the Space class. The Player character starts
* here and is able to collect 3 health potions to use further in the dungeon
* or try beating the dungeon without any health potions.
*******************************************************************************/

#include <iostream>
#include "Space.hpp"
#include "StartingSpace.hpp"
#include "PoisonSpace.hpp"
#include "FreezeSpace.hpp"
#include "BossSpace.hpp"
#include "NoAirSpace.hpp"

using std::cout;
using std::endl;
using std::cin;

StartingSpace::StartingSpace()
{
    setRName("Starting Space");
    setTop(nullptr);
    setRight(nullptr);
    setBottom(nullptr);
    setLeft(nullptr);
    m = new Menu;
    setMenu();
}

StartingSpace::~StartingSpace()
{
    delete m;
}

void StartingSpace::printRDescrip()
{
    if (getEntered() == 0)
    {
        std::cout << "Welcome to the Beginning of the Dungeon!" << std::endl;
        std::cout << "Here you will be equipped with 3 health potions to help you during your crawl through the dungeon!" << std::endl;
        cout << "*** 3 Health Potions added to Character ***" << endl;
        setEntered(1);
       
    }
    else 
    {
        cout << "Area: Starting Area" << endl;
        cout << "There is nothing new here, proceed to the other spaces in the dungeon" << endl;
    }
}

void StartingSpace::setMenu()
{

    m->setNumItem(4);
    m->setItem("Move to the poison room");
    m->setItem("Do nothing");
    m->setItem("Use a health potion");
    m->setItem("Quit");
}

Menu * StartingSpace::getMenu()
{
    return m;
}

void StartingSpace::printMenu()
{
    m->display();
}

