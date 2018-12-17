/******************************************************************************
* Author: Granit Arifi
* Date: 11/20/2018
* Description: Derived class from the Space class. Holds the first monster
* and key values with an area effect of freezing. This space is very cold
* and only lets the player attack every 2 turns instead of every turn while
* the monster in the area can attack the player every turn.
*******************************************************************************/

#ifndef FREEZE_SPACE_HPP
#define FREEZE_SPACE_HPP

#include "Space.hpp"
#include "Monster.hpp"

class FreezeSpace : public Space
{
    private:
        Monster * freezeM;
        Menu *m;
    public:
        FreezeSpace();
        ~FreezeSpace();
        virtual void printRDescrip();
        //virtual void specialProp();
        virtual void setMenu();
        Menu * getMenu();
        virtual void printMenu();
        Monster * getMonster();
};

#endif