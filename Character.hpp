/******************************************************************************
 * Author: Granit Arifi
 * Date: 10/23/2018
 * Description: This is the base class used to make the Player character and 
 * the Monster characters the Player will fight as he/she progresses through
 * the dungeon. 
 * ***************************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

using std::string;

class Character 
{
    private:
        string name; 
        int armor;
        int strength;
        int attDice;
        int defDice;
        int numAdice;
        int numDdice;
        int rollA;
        int rollD;
        int attackDmg;
        int defenseDmg;
        int potions;
        //int defendDmg; 
        string type;

    public:
        virtual ~Character() = 0;
        void setName(string);
        void setArmor(int);
        void setStrength(int);
        void setAdice(int);
        void setDdice(int);
        void setNumAdice(int);
        void setNumDdice(int);
        void setType(string);
        void setAttack(int);
        void setPotions(int);
        int getPotions();
        virtual void recover() = 0; 
        //void setDefense(int);
        string getName();
        int getArmor();
        int getStrength();
        int getAdice();
        int getDdice();
        int getNumAdice();
        int getNumDdice();
        int getRollA();
        int getRollD();
        int getAttack();
        //int getDefense();
        string getType();
        virtual int attack() = 0;
        virtual int defend() = 0;
        int attack_roll();
        int defense_roll();
        virtual void mob();
        virtual void hogwarts();
};

#endif