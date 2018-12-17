/******************************************************************************
* Author: Granit Arifi
* Date: 11/20/2018
* Description: Derived class from the Space class. Is the last room of the 
* dungeon that holds the treasure.
*******************************************************************************/


#ifndef TREASURE_SPACE_HPP
#define TREASURE_SPACE_HPP

#include "Space.hpp"
#include "Monster.hpp"

class TreasureSpace : public Space
{
    private:
        Menu * m;
    public:
        TreasureSpace();
        ~TreasureSpace();
        virtual void printRDescrip();
        virtual void setMenu();
        Menu * getMenu();
        virtual void printMenu();
};

#endif