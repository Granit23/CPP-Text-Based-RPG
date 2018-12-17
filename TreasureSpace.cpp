/******************************************************************************
* Author: Granit Arifi
* Date: 11/20/2018
* Description: Derived class from the Space class. Is the last room of the 
* dungeon that holds the treasure.
*******************************************************************************/

#include <iostream>
#include "Space.hpp"
#include "StartingSpace.hpp"
#include "TreasureSpace.hpp"
#include "FreezeSpace.hpp"
#include "BossSpace.hpp"
#include "NoAirSpace.hpp"

using std::cout;
using std::endl;
using std::cin;

TreasureSpace::TreasureSpace()
{
    setRName("Treasure Space");
    setTop(nullptr);
    setRight(nullptr);
    setBottom(nullptr);
    setLeft(nullptr);
    m = new Menu;
    setMenu();
}

TreasureSpace::~TreasureSpace()
{
    delete m;
}

void TreasureSpace::printRDescrip()
{
    cout << "Not used" << endl;
}

void TreasureSpace::setMenu()
{
    m->setNumItem(4);
    m->setItem("Move to Freezing Room");
    m->setItem("Move to Starting Room");
    m->setItem("Use a health potion");
    m->setItem("Quit");
}


Menu * TreasureSpace::getMenu()
{
    return m;
}

void TreasureSpace::printMenu()
{
    m->display();
}
