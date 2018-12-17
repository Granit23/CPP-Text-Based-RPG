/******************************************************************************
* Author: Granit Arifi
* Date: 11/20/2018
* Description: Derived class from the Space class. This space has no oxygen.
* The player must defeat the monster in a set amount of turns before
* they suffocate and lose the game.
*******************************************************************************/


#ifndef NO_AIR_SPACE_HPP
#define NO_AIR_SPACE_HPP

#include "Space.hpp"
#include "Monster.hpp"

class NoAirSpace : public Space
{
    private:
        Monster * noAirM;
        Menu * m;
    public:
        NoAirSpace();
        ~NoAirSpace();
        virtual void printRDescrip();
        virtual void setMenu();
        Menu * getMenu();
        virtual void printMenu();
        Monster * getMonster();
};

#endif