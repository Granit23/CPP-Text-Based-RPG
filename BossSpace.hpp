/******************************************************************************
* Author: Granit Arifi
* Date: 11/20/2018
* Description: Derived class from the Space class. This space contains the 
* Boss monster of the dungeon who is the strongest out of the 4 monsters.
*******************************************************************************/

#ifndef BOSS_SPACE_HPP
#define BOSS_SPACE_HPP

#include "Space.hpp"
#include "Monster.hpp"

class BossSpace : public Space
{
    private:
        Monster * bossM;
        Menu * m;
    public:
        BossSpace();
        ~BossSpace();
        virtual void printRDescrip();
        //virtual void specialProp();
        virtual void setMenu();
        Menu * getMenu();
        virtual void printMenu();
        Monster * getMonster();

};

#endif