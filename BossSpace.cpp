/******************************************************************************
* Author: Granit Arifi
* Date: 11/20/2018
* Description: Derived class from the Space class. This space contains the 
* Boss monster of the dungeon who is the strongest out of the 4 monsters.
*******************************************************************************/

#include <iostream>
#include "Space.hpp"
#include "StartingSpace.hpp"
#include "PoisonSpace.hpp"
#include "FreezeSpace.hpp"
#include "NoAirSpace.hpp"
#include "Monster.hpp"
#include "BossSpace.hpp"

using std::cout;
using std::endl;
using std::cin;

BossSpace::BossSpace()
{
    setRName("Boss Space");
    setTop(nullptr);
    setRight(nullptr);
    setBottom(nullptr);
    setLeft(nullptr);
    m = new Menu;
    setMenu();

    bossM = new Monster();
    bossM->setStrength(25);
    bossM->setType("Boss Monster");
}

BossSpace::~BossSpace()
{
    delete m;
    delete bossM;
}

void BossSpace::printRDescrip()
{
    if (getEntered() == 0)
    {
        cout << "Welcome to the Boss Space" << endl;
        cout << "You have almost made it to the end...almost..." << endl;
        cout << "******GGGGGGGGGGRRRRRRRRRRRRRAAAAAAAAAAAAAAAAAAAAAAA*****" << endl;
        cout << "Maximus: What could that be?????" << endl;
        cout << "Get ready!! <Pokemon encounter music plays>" << endl;
        setEntered(1);
    }
    else if (getEntered() == 1)
    {
        cout << "Area: Boss" << endl;
        cout << "You have already defeated the monster" << endl;
        cout << "and collected the key here." << endl;
        cout << "Go onto the next room and collect your reward!!" << endl;
    }

}

void BossSpace::setMenu()
{
    m->setNumItem(3);
    m->setItem("Use the 4 Keys to unlock the room to the Treasure space");
    m->setItem("Move to the No Air Space");
    m->setItem("Quit");
}

Monster * BossSpace::getMonster()
{
    return bossM;
}


Menu * BossSpace::getMenu()
{
    return m;
}

void BossSpace::printMenu()
{
    m->display();
}