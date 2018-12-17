/******************************************************************************
 * Author: Granit Arifi
 * Date: 11/20/2018
 * Description: Derived class from the Character class. Monster encountered
 * in the Freeze space.
 * ***************************************************************************/

#include "Monster.hpp"
#include "Character.hpp"

Monster::Monster()
{
    setArmor(0);
    setStrength(10);
    setAdice(6);
    setDdice(6);
    setNumAdice(2);
    setNumDdice(2);
}

int Monster::attack()
{
    int char_attack = attack_roll();
    setAttack(char_attack);
    return char_attack;
}

int Monster::defend()
{
    int char_defend = defense_roll();
    //setDefense(char_defend);
    return char_defend + getArmor();
}

void Monster::recover()
{
    return;
}