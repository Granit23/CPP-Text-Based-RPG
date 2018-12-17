/******************************************************************************
* Author: Granit Arifi
* Date: 11/20/2018
* Description: Derived class from the Space class. This space has no oxygen.
* The player must defeat the monster in a set amount of turns before
* they suffocate and lose the game.
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

NoAirSpace::NoAirSpace()
{
    setRName("No Air Space");
    setTop(nullptr);
    setRight(nullptr);
    setBottom(nullptr);
    setLeft(nullptr);
    m = new Menu;
    setMenu();

    noAirM = new Monster();
    noAirM->setStrength(20);
    noAirM->setType("No Air Monster");
}

NoAirSpace::~NoAirSpace()
{
    delete m;
    delete noAirM;
}

void NoAirSpace::printRDescrip()
{
    if (getEntered() == 0)
    {
        cout << "Welcome to the NoAir Space" << endl;
        cout << "In this space, you will have to defeat the monster in 15 turns";
        cout << " or risk suffocating and dying." << endl;
        cout << "Get ready!! <Pokemon encounter music plays>" << endl;
        setEntered(1);
    }
    else if (getEntered() == 1)
    {
        cout << "Area: No Air Space" << endl;
        cout << "You have already defeated the monster" << endl;
        cout << "and collected the key here." << endl;
        cout << "Please proceed to the next area of the dungeon" << endl;
    }

}

void NoAirSpace::setMenu()
{
    m->setNumItem(3);
    m->setItem("Move to the Boss Space");
    m->setItem("Move to the Frozen Space");
    m->setItem("Use a health potion");
    m->setItem("Quit");
}

Monster * NoAirSpace::getMonster()
{
    return noAirM;
}


Menu * NoAirSpace::getMenu()
{
    return m;
}

void NoAirSpace::printMenu()
{
    m->display();
}