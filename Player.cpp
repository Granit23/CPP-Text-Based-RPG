/******************************************************************************
 * Author: Granit Arifi
 * Date: 11/20/2018
 * Description: Derived class from the Character class. Monster encountered
 * in the Poison space.
 * ***************************************************************************/

#include <iostream>
#include "Player.hpp"
#include "Character.hpp"

using std::cout;
using std::endl;

Player::Player()
{
    setArmor(0);
    setStrength(35);
    setAdice(8);
    setDdice(6);
    setNumAdice(2);
    setNumDdice(2);
    setType("Player");
    setZone(1);
}

void Player::setPotions(int potions)
{
    this->potions = potions;
}

int Player::getPotions()
{
    return potions;
}

void Player::usePotion()
{
    cout << endl << "<< Using Potion >>" << endl;
    if (potions > 0 && getStrength() < 35)
    {
        if (getStrength() == 34)
        {
        cout << "Used potion and recovered 1 strength." << endl;
        setStrength(getStrength()+1);
        cout << "New Strength is: " << getStrength() << endl;
        setPotions(getPotions()-1);
        cout << "You have " << getPotions() << " potions available now" << endl;
        }
        else if (getStrength() == 33)
        {
            cout << "Used potion and recovered 2 strength." << endl;
            setStrength(getStrength()+2);
            cout << "New Strength is: " << getStrength() << endl;
            setPotions(getPotions()-1);
            cout << "You have " << getPotions() << " potions available now" << endl;
        }
        else if (getStrength() == 32)
        {
            cout << "Used potion and recovered 3 strength." << endl;
            setStrength(getStrength()+3);
            cout << "New Strength is: " << getStrength() << endl;
            setPotions(getPotions()-1);
            cout << "You have " << getPotions() << " potions available now" << endl;
        }
        else if (getStrength() == 31)
        {
            cout << "Used potion and recovered 4 strength." << endl;
            setStrength(getStrength()+4);
            cout << "New Strength is: " << getStrength() << endl;
            setPotions(getPotions()-1);
            cout << "You have " << getPotions() << " potions available now" << endl;
        }
        else 
        {
            cout << "Used potion and recovered 5 strength." << endl;
            setStrength(getStrength()+5);
            cout << "New Strength is: " << getStrength() << endl;
            setPotions(getPotions()-1);
            cout << "You have " << getPotions() << " potions available now" << endl;
        }
    }
    else if (getStrength() == 35)
    {
        cout << "Cannot use potion, you are already at max strength!" << endl;
    }
    else 
    {
        cout << "Sorry, you are out of potions" << endl;
    }
    cout << "<<--------->>" << endl << endl;
    std::cin.clear();
    std::cin.ignore();
    std::cin.clear();
}
void Player::setZone(int zone)
{
    this->zone = zone;
}

void Player::setKeys(int k)
{
    keys.push_back(k);
}

int Player::getKeys()
{
    return keys.size();
}

int Player::getZone()
{
    return zone;
}

int Player::attack()
{
    int char_attack = attack_roll();
    setAttack(char_attack);
    return char_attack;
}

int Player::defend()
{
    int char_defend = defense_roll();
    //setDefense(char_defend);
    return char_defend + getArmor();
}

void Player::recover()
{
    if (getStrength() == 34)
    {
        setStrength(35);
    }
    else if (getStrength() == 33)
    {
        setStrength(35);
    }
    else if (getStrength() <= 32)
    {
        setStrength(getStrength() + 3);
    }
}