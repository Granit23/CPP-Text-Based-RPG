/******************************************************************************
* Author: Granit Arifi
* Date: 11/20/2018
* Description: Derived class from the Space class. This space has poison in the
* air so the player takes extra damage from that each round that the fight
* with the monster goes on.
*******************************************************************************/

#ifndef POISON_SPACE_HPP
#define POISON_SPACE_HPP

#include "Space.hpp"
#include "Monster.hpp"

class PoisonSpace : public Space
{
    private:
        Monster * poisonM;
        Menu * m;
    public:
        PoisonSpace();
        ~PoisonSpace();
        virtual void printRDescrip();
        //virtual void specialProp();
        virtual void setMenu();
        Menu * getMenu();
        virtual void printMenu();
        Monster * getMonster();

};

#endif