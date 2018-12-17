/******************************************************************************
 * Author: Granit Arifi
 * Date: 9/21/2018
 * Description: Menu class that let's you add menu items, remove menu
 * items, get user input, and display menu contents.
 * ****************************************************************************/

#include <iostream>
#include <string>
#include "Menu.hpp"
#include "validateInput.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::string;

/******************************************************************************
 * Default constructor for the Menu class. Sets the number of items to just 1
 * and to display "Quit" on that menu item.
 * ***************************************************************************/
Menu::Menu()
{
    numItems = 1; 
    items[0] = "Empty";

}

/******************************************************************************
 * Constructor for menu class, takes in an int representing the number of 
 * menu items you want. It initializes each of those items to empty in an 
 * array.
 * ***************************************************************************/
Menu::Menu(int nuItems)
{
    setNumItem(nuItems);
}


/******************************************************************************
 * Takes in a string and iterates through the items array. If the value is "Empty"
 * it replaces it with the string passed in. Then it breaks out of the loop
 * to avoid adding the passed in string to the rest of the empty items. 
 * ***************************************************************************/
void Menu::setItem(string item)
{
    
    for (int i = 0; i < numItems; i++)
    {
        if (items[i] == "Empty")
        {
            items[i] = item;
            break;
        }
    }
}

/******************************************************************************
 * Setter method for numItems. This variable is the number of items the menu
 * will have.
 * ***************************************************************************/
void Menu::setNumItem(int nuItems)
{  
    numItems = nuItems;
    for (int i = 0; i < numItems; i++)
    {
        items[i] = "Empty";
    }   
}

/******************************************************************************
 * Method that accepts an item number as an int, and decrements it by 1 to
 * access that item in the items array and sets it to "Empty"
 * ***************************************************************************/
void Menu::removeItem(int itemNumber)
{
    items[itemNumber-1] = "Empty";
}

/******************************************************************************
 * Loops through item array and displays the contents. 
 * ***************************************************************************/
void Menu::display()
{
    for (int i = 0; i < numItems; i++)
    {
        cout << i+1 << ". " << items[i] << endl;
    }
    setChoice();
}


/******************************************************************************
 * Takes in user input after displaying the menu, and does a validation check
 * to make sure it is within the bounds of the numbers the menu is displaying
 * as well as to make sure it is an int.
 * ***************************************************************************/
void Menu::setChoice()
{
    string itemChoice;
    cout << "Choice: ";
    std::getline(cin, itemChoice);
    while (validateInput(itemChoice, 1,numItems) == false)
    {
        cout << "Please enter a valid number: ";
        std::getline(cin, itemChoice);
    }
    choice = std::stoi(itemChoice);
        
}

void Menu::setChoiceManual(int choice)
{
    this->choice = choice; 
}

int Menu::getNumItem()
{
    return numItems;
}

/******************************************************************************
 * Returns the value stored in the choice the user picks. Used to check if the 
 * user selected "Quit" or not.
 * ***************************************************************************/
int Menu::getChoice()
{
    return choice;
}


