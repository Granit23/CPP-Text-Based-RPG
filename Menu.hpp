/******************************************************************************
 * Author: Granit Arifi
 * Date: 9/21/2018
 * Description: Menu class that let's you add menu items, remove menu
 * items, get user input, and display menu contents.
 * ****************************************************************************/

#ifndef Menu_HPP
#define Menu_HPP
#include <string>

using std::string;

class Menu {
    private:
        int numItems;
        int choice;
        string items[10];

    
    public:
        Menu();
        Menu(int);
        void setItem(string);
        void setNumItem(int);
        void removeItem(int);
        void setChoiceManual(int);
        void display();
        void setChoice();
        int getNumItem();
        int getChoice();
};

#endif