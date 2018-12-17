/******************************************************************************
* Author: Granit Arifi
* Date: 11/20/2018
* Description: Derived class from the Space class. This space has poison in the
* air so the player takes extra damage from that each round that the fight
* with the monster goes on.
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

PoisonSpace::PoisonSpace()
{
    setRName("Poison Space");
    setTop(nullptr);
    setRight(nullptr);
    setBottom(nullptr);
    setLeft(nullptr);
    m = new Menu;
    setMenu();

    poisonM = new Monster();
    poisonM->setStrength(20);
    poisonM->setType("Poison Monster");
}

PoisonSpace::~PoisonSpace()
{
    delete m;
    delete poisonM;
}

void PoisonSpace::printRDescrip()
{
    if (getEntered() == 0)
    {
        cout << "Welcome to the Poison Space" << endl;
        cout << "In this space, you will take extra poison damage each round you ";
        cout << "fight the monster." << endl;
        cout << "Get ready!! <Pokemon encounter music plays>" << endl;
        setEntered(1);
    }
    else if (getEntered() == 1)
    {
        cout << "Area: Poison Space" << endl;
        cout << "You have already defeated the monster" << endl;
        cout << "and collected the key here." << endl;
        cout << "Please proceed to the next area of the dungeon" << endl;
    }

}

void PoisonSpace::setMenu()
{
    m->setNumItem(4);
    m->setItem("Move to Freezing Room");
    m->setItem("Move to Starting Room");
    m->setItem("Use a health potion");
    m->setItem("Quit");
}

Monster * PoisonSpace::getMonster()
{
    return poisonM;
}


Menu * PoisonSpace::getMenu()
{
    return m;
}

void PoisonSpace::printMenu()
{
    m->display();
}
