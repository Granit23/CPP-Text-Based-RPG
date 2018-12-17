/******************************************************************************
 * Author: Granit Arifi
 * Date: 11/20/2018
 * Description: Derived class from the Character class. Monster encountered
 * in the Freeze space.
 * ***************************************************************************/

#ifndef MONSTER_HPP
#define MONSTER_HPP
#include "Character.hpp"

class Monster : public Character
{
    public:
        Monster();
            virtual int attack();
            virtual int defend();
            virtual void recover();
};

#endif