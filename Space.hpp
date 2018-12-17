/******************************************************************************
 * Author: Granit Arifi
 * Date: 11/20/2018
 * Description: Space class which represents the space the player can be in. This
 * class is an abstract class with pure virtual functions and includes 4 Space 
 * pointers: top, right, left and bottom.
 * ****************************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP
#include "Menu.hpp"

#include <string>


class Space 
{
    private:
        Space *top;
        Space *right;
        Space *left;
        Space *bottom;
        std::string rName;
        int entered = 0;
        Menu m;
    
    public:
        virtual void setTop(Space *top);
        virtual void setRight(Space *right);
        virtual void setLeft(Space *left);
        virtual void setBottom(Space *bottom);
        virtual void setRName(std::string);
        virtual void setEntered(int);
        virtual int getEntered();
        virtual Space* getTop();
        virtual Space* getRight();
        virtual Space* getLeft();
        virtual Space* getBottom();
        virtual std::string getRName();
        virtual void printRDescrip() = 0;
        virtual void setMenu() = 0;
        virtual void printMenu() = 0;
        //virtual void specialProp() = 0;
};


#endif