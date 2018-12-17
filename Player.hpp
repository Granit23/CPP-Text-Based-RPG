/******************************************************************************
 * Author: Granit Arifi
 * Date: 11/20/2018
 * Description: Derived class from the Character class. This the character
 * the player will play.
 * ***************************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Character.hpp"
#include <vector>

using std::vector;

class Player : public Character
{
    private:
        int zone;
        int potions;
        vector<int> keys;  //Container for Player to hold keys
    public:
        Player();
            void setZone(int);
            int getZone();
            void setKeys(int);
            int getKeys();
            virtual int attack();
            virtual int defend();
            virtual void recover();
            void setPotions(int);
            int getPotions();
            void usePotion();
};

#endif