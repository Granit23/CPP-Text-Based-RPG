/******************************************************************************
* Author: Granit Arifi
* Date: 11/20/2018
* Description: Derived class from the Space class. Holds the first monster
* and key values with an area effect of freezing. This space is very cold
* and only lets the player attack every 2 turns instead of every turn while
* the monster in the area can attack the player every turn.
*******************************************************************************/

#include <iostream>
#include "Space.hpp"
#include "StartingSpace.hpp"
#include "PoisonSpace.hpp"
#include "FreezeSpace.hpp"
#include "BossSpace.hpp"
#include "NoAirSpace.hpp"
#include "Monster.hpp"

using std::cout;
using std::endl;
using std::cin;

FreezeSpace::FreezeSpace()
{
    setRName("Freeze Space");
    setTop(nullptr);
    setRight(nullptr);
    setBottom(nullptr);
    setLeft(nullptr);
    m = new Menu;
    setMenu();

    freezeM = new Monster();
    freezeM->setType("Freeze Monster");
}

FreezeSpace::~FreezeSpace()
{
    delete m;
    delete freezeM;
}

void FreezeSpace::printRDescrip()
{
    if (getEntered() == 0)
    {
        cout << "Welcome to the Freeze Space" << endl;
        cout << "In this space, your character is frozen every other round";
        cout << "when fighting the monster and is unable to attack." << endl;
        cout << "Get ready!! <Pokemon encounter music plays>" << endl;
        setEntered(1);
    }
    else if (getEntered() == 1)
    {
        cout << "Area: Freeze Space" << endl;
        cout << "You have already defeated the monster" << endl;
        cout << "and collected the key here." << endl;
        cout << "Please proceed to the next area of the dungeon" << endl;
    }
}

void FreezeSpace::setMenu()
{
    m->setNumItem(4);
    m->setItem("Move to No Oxygen Space");
    m->setItem("Move to Poison Space");
    m->setItem("Use a health potion");
    m->setItem("Quit");
}

Monster * FreezeSpace::getMonster()
{
    return freezeM;
}


Menu * FreezeSpace::getMenu()
{
    return m;
}

void FreezeSpace::printMenu()
{
    m->display();
}