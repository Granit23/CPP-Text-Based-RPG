/******************************************************************************
 * Author: Granit Arifi
 * Date: 10/23/2018
 * Description: This is the base class that all of the other playable character
 * classes will derive from. This class is an abstract class. 
 * ***************************************************************************/
#include <cmath>
#include <string>
#include "Character.hpp"

Character::~Character()
{
    int z = 0;
}
// General set and get methods for the member variables
void Character::setName(string name)
{
    this->name = name;
}
void Character::setArmor(int armor)
{
    this->armor = armor; 
}

void Character::setStrength(int strength)
{
    this->strength = strength;
}

void Character::setAdice(int attDice)
{
    this->attDice = attDice;
}

void Character::setDdice(int defDice)
{
    this->defDice = defDice;
}

void Character::setNumAdice(int numAdice)
{
    this->numAdice = numAdice;
}

void Character::setNumDdice(int numDdice)
{
    this->numDdice = numDdice;
}

void Character::setType(string type)
{
    this->type = type;
}

void Character::setAttack(int attackDmg)
{
    this->attackDmg = attackDmg;
}

void Character::setPotions(int potions)
{
    this->potions = potions;
}

int Character::getPotions()
{
    return potions;
}

void Character::mob()
{
    int x = 0;
}

void Character::hogwarts()
{
    int y = 0;
}

string Character::getName()
{
    return name;
}

int Character::getArmor()
{
    return armor;
}

int Character::getStrength()
{
    return strength;
}

int Character::getAdice()
{
    return attDice;
}

int Character::getDdice()
{
    return defDice;
}

int Character::getNumAdice()
{
    return numAdice;
}

int Character::getNumDdice()
{
    return numDdice;
}

string Character::getType()
{
    return type;
}

int Character::getRollA()
{
    return rollA;
}

int Character::getRollD()
{
    return rollD;
}

int Character::getAttack()
{
    return attackDmg;
}

// generates a random roll based on the number of attack dice
int Character::attack_roll()
{
    int roll = 0;
    for (int i =0; i < getNumAdice(); i++)
    {
        int randroll = rand() % getAdice() + 1;
        roll += randroll;
    }
    rollA = roll;
    return roll;
}

// generates a random roll based on the number of defense dice
int Character::defense_roll()
{
    int roll = 0;
    for (int i =0; i < getNumDdice(); i++)
    {
        int randroll = rand() % getDdice() + 1;
        roll += randroll;
    }
    rollD = roll;
    return roll;
}