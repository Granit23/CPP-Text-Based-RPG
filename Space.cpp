/******************************************************************************
 * Author: Granit Arifi
 * Date: 11/20/2018
 * Description: Space class which represents the space the player can be in. This
 * class is an abstract class with pure virtual functions and includes 4 Space 
 * pointers: top, right, left and bottom.
 * ****************************************************************************/

#include "Space.hpp"
#include <string>

void Space::setTop(Space *top)
{
    this->top = top;
}

void Space::setRight(Space *right)
{
    this->right = right;
}

void Space::setLeft(Space *left)
{
    this->left = left;
}

void Space::setBottom(Space *bottom)
{
    this->bottom = bottom;
}

void Space::setRName(std::string rName)
{
    this->rName = rName;
}

void Space::setEntered(int entered)
{
    this->entered = entered;
}

int Space::getEntered()
{
    return entered;
}

Space* Space::getTop()
{
    return top;
}

Space* Space::getRight()
{
    return right;
}

Space* Space::getLeft()
{
    return left;
}

Space* Space::getBottom()
{
    return bottom;
}

std::string Space::getRName()
{
    return rName;
}


