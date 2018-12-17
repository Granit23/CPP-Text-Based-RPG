/******************************************************************************
* Author: Granit Arifi
* Date: 11/20/2018
* Description: Derived class from the Space class. The Player character starts
* here and is able to collect 3 health potions to use further in the dungeon
* or try beating the dungeon without any health potions.
*******************************************************************************/

#ifndef STARTING_SPACE_HPP
#define STARTING_SPACE_HPP

#include "Space.hpp"
#include "Menu.hpp"

class StartingSpace : public Space
{
    private:
        Menu * m;
    public:
        StartingSpace();
        ~StartingSpace();
        virtual void printRDescrip();
       // virtual void specialProp();
        virtual void setMenu();
        virtual Menu * getMenu();
        virtual void printMenu();
};

#endif


