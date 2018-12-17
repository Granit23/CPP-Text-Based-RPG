/******************************************************************************
 * Author: Granit Arifi
 * Date: 11/20/2018
 * Description: Game class that handles the logic for the dungeon crawler
 * ***************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include "Game.hpp"
#include "StartingSpace.hpp"
#include "Space.hpp"
#include "PoisonSpace.hpp"
#include "FreezeSpace.hpp"
#include "BossSpace.hpp"
#include "TreasureSpace.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

Game::Game()
{
    setMenu();
    makeCharacter();
    makeSpaces();

   
}

// free up memory
Game::~Game()
{
    delete start;
    delete poison;
    delete freeze;
    delete noAir;
    delete hero;
    delete boss;
    delete treasure;
}

void Game::setMenu()
{
    begin.setNumItem(2);
    begin.setItem("Play");
    begin.setItem("Quit");
}


void Game::makeCharacter()
{
    hero = new Player;
    hero->setName("Maximus");
    hero->setPotions(3);
}

// create our spaces and set their directional pointers
void Game::makeSpaces()
{

    start = new StartingSpace;
    poison = new PoisonSpace;
    freeze = new FreezeSpace;
    noAir = new NoAirSpace;
    boss = new BossSpace;
    treasure = new TreasureSpace;

    start->setLeft(poison);
    poison->setRight(start);
    poison->setTop(freeze);
    freeze->setBottom(poison);
    freeze->setRight(noAir);
    noAir->setLeft(freeze);
    noAir->setTop(boss);
    boss->setBottom(noAir);
    boss->setLeft(treasure);
    treasure->setRight(boss);

    
 
}

void Game::printSpaces()
{
    if (pos == 1)
    { 
        cout << "|----------------|----------------|\n";
        cout << "|       6        -       5        |\n";
        cout << "|   (Treasure)   -   (Boss Room)  |\n";
        cout << "|----------------|------||--------|\n";
        cout << "|       3        -       4        |\n";
        cout << "|  (Frozen Room) -(No Oxygen Room)|\n";
        cout << "|-------||-------|----------------|\n";
        cout << "|       2        -    *Maximus*   |\n";
        cout << "|  (Poison Room) -  (Start Area)  |\n";
        cout << "|----------------|----------------|\n";
    }
    else if (pos == 2)
    {
        cout << "|----------------|----------------|\n";
        cout << "|       6        -       5        |\n";
        cout << "|   (Treasure)   -   (Boss Room)  |\n";
        cout << "|----------------|------||--------|\n";
        cout << "|       3        -       4        |\n";
        cout << "|  (Frozen Room) -(No Oxygen Room)|\n";
        cout << "|-------||-------|----------------|\n";
        cout << "|    *Maximus*   -       1        |\n";
        cout << "|  (Poison Room) -  (Start Area)  |\n";
        cout << "|----------------|----------------|\n";
    }
    else if (pos == 4)
    {
        cout << "|----------------|----------------|\n";
        cout << "|       6        -       5        |\n";
        cout << "|   (Treasure)   -   (Boss Room)  |\n";
        cout << "|----------------|------||--------|\n";
        cout << "|       3        -    *Maximus*   |\n";
        cout << "|  (Frozen Room) -(No Oxygen Room)|\n";
        cout << "|-------||-------|----------------|\n";
        cout << "|       2        -       1        |\n";
        cout << "|  (Poison Room) -  (Start Area)  |\n";
        cout << "|----------------|----------------|\n";
    }
    else if (pos == 3)
    {
        cout << "|----------------|----------------|\n";
        cout << "|       6        -       5        |\n";
        cout << "|   (Treasure)   -   (Boss Room)  |\n";
        cout << "|----------------|------||--------|\n";
        cout << "|    *Maximus*   -       4        |\n";
        cout << "|  (Frozen Room) -(No Oxygen Room)|\n";
        cout << "|-------||-------|----------------|\n";
        cout << "|        2       -       1        |\n";
        cout << "|  (Poison Room) -  (Start Area)  |\n";
        cout << "|----------------|----------------|\n";
    }
    else if (pos == 5)
    {
        cout << "|----------------|----------------|\n";
        cout << "|        6       -    *Maximus*   |\n";
        cout << "|   (Treasure)   -   (Boss Room)  |\n";
        cout << "|----------------|------||--------|\n";
        cout << "|        3       -       4        |\n";
        cout << "|  (Frozen Room) -(No Oxygen Room)|\n";
        cout << "|-------||-------|----------------|\n";
        cout << "|        2       -       1        |\n";
        cout << "|  (Poison Room) -  (Start Area)  |\n";
        cout << "|----------------|----------------|\n";
    }
    else if (pos == 6)
    {
        cout << "|----------------|----------------|\n";
        cout << "|    *Maximus*   -       5        |\n";
        cout << "|   (Treasure)   -   (Boss Room)  |\n";
        cout << "|----------------|------||--------|\n";
        cout << "|        3       -       4        |\n";
        cout << "|  (Frozen Room) -(No Oxygen Room)|\n";
        cout << "|-------||-------|----------------|\n";
        cout << "|        2       -       1        |\n";
        cout << "|  (Poison Room) -  (Start Area)  |\n";
        cout << "|----------------|----------------|\n";

        cout << endl << endl;

        cout << "YOU FOUND THE TREASURE, CONGRATS!" << endl;
        cout <<"*******************************************************************************"<<endl;
        cout <<"|                   |                  |                     |                 "<<endl;
        cout <<"_________|________________.===_;=.______________|_____________________|_______ "<<endl;
        cout <<"|                   |  ,-=_,===     `==.|                  |                   "<<endl;
        cout <<"|___________________|__==._o`=-._        `==.______________|___________________"<<endl;
        cout <<"        |                `==._o`==._      _`==._                     |         "<<endl;
        cout <<"_________|_____________________:=._o ==._.=_.-==`==.__________________|_______ "<<endl;
        cout <<"|                   |    __.--= , ; `==._o.= ,-===-._ =.   |                   "<<endl;
        cout <<"|___________________|_._=  ,. .` ` `` ,  `=-._=-._   =. `__|___________________"<<endl;
        cout <<"        |           |o`==._` , =` `; .=. ,  =-._=-._; ;              |         "<<endl;
        cout <<"_________|___________| ;`-.o`==._; .= ` ``.=\` . =-._ /_______________|_______ "<<endl;
        cout <<"|                   | |o;    `=-.o`==._``  `` = ,__.--o;   |                   "<<endl;
        cout <<"|___________________|_| ;     (#) `-.o `==.`_.--=_o.-; ;___|___________________"<<endl;
        cout <<"____/______/______/___|o;._    =      `=.o|o_.--=    ;o;____/______/______/____"<<endl;
        cout <<"/______/______/______/_==._o--._        ; | ;        ; ;/______/______/______/_"<<endl;
        cout <<"____/______/______/______/__==._o--._   ;o|o;     _._;o;____/______/______/____"<<endl;
        cout <<"/______/______/______/______/____==._o._; | ;_.--=o.--=_/______/______/______/_"<<endl;
        cout <<"____/______/______/______/______/_____==.o|o_.--==___/______/______/______/____"<<endl;
        cout <<"/______/______/______/______/______/______/______/______/______/______/[TomekK]"<<endl;
        cout <<"*******************************************************************************"<<endl;


    }
}

void Game::spaceAction()
{
    // Check which room and if the hero is still alive
    if (nextRoom == "Starting Space" && alive == true)
    {
        // print the map, description of the room, and the menu
        printSpaces();
        start->printRDescrip();
        start->getMenu()->display();

        // based on choices, either move to the next room, or previous room
        if (start->getMenu()->getChoice() == 1)
        {
            cout << "<Moving to the Poison Space>" << endl;
            nextRoom = start->getLeft()->getRName();
            prevRoom = start->getRName();
            std::cin.clear();
            std::cin.ignore();
            std::cin.clear();
            pos = 2;
            turn++;
        }
        else if (start->getMenu()->getChoice() == 2)
        {
            cout << "...<nervous whistling>...ok doing nothing..." << endl;
            std::cin.clear();
            std::cin.ignore();
            std::cin.clear();
            turn++;
        }
        else if (start->getMenu()->getChoice() == 3)
        {
            clear();
            hero->usePotion();
            turn++;
        }
        else if (start->getMenu()->getChoice() == 4)
        {
            choice = start->getMenu()->getChoice();
            return;
        }
       /* std::cin.clear();
        std::cin.ignore();
        std::cin.clear();*/
        clear();
    }
    else if ( nextRoom == "Poison Space" && alive == true)
    {
        printSpaces();
        if (poison->getEntered() == 0)
        {
            poison->printRDescrip();
            //Character * pMon = poison->getMonster();
            battle(poison->getMonster());
            //delete pMon;
            if (alive == true)
            {
                
                poison->getMenu()->display();
                cout << "choice is: " << poison->getMenu()->getChoice() << endl;
                if (poison->getMenu()->getChoice() == 1)
                {
                    cout << "<Moving to the Freeze Space>" << endl;
                    nextRoom = poison->getTop()->getRName();
                    prevRoom = poison->getRName();
                    std::cin.clear();
                    std::cin.ignore();
                    std::cin.clear();
                    pos = 3;
                    turn++;
                }
                else if (poison->getMenu()->getChoice() == 2)
                {
                    cout << "<Moving back to the starting Area>" << endl;
                    nextRoom = poison->getRight()->getRName();
                    prevRoom = poison->getRName();
                    std::cin.clear();
                    std::cin.ignore();
                    std::cin.clear();
                    pos = 1;
                    turn++;
                }
                else if (poison->getMenu()->getChoice() == 3)
                {
                    clear();
                    hero->usePotion();
                    turn++;
                }
                else if (poison->getMenu()->getChoice() == 4)
                {
                    choice = poison->getMenu()->getChoice();
                    return;
                }
            }
            
        }
        else if (alive == true)
        {
            poison->printRDescrip();
            poison->getMenu()->display();
            if (poison->getMenu()->getChoice() == 1)
            {
                cout << "<Moving to the Freeze Space>" << endl;
                nextRoom = poison->getTop()->getRName();
                prevRoom = poison->getRName();
                std::cin.clear();
                std::cin.ignore();
                std::cin.clear();
                pos = 3;
                turn++;
            }
            else if (poison->getMenu()->getChoice() == 2)
            {
                cout << "<Moving back to the starting Area>" << endl;
                nextRoom = poison->getRight()->getRName();
                prevRoom = poison->getRName();
                std::cin.clear();
                std::cin.ignore();
                std::cin.clear();
                pos = 1;
                turn++;
            }
            else if (poison->getMenu()->getChoice() == 3)
            {
                clear();
                hero->usePotion();
                turn++;
            }
            else if (poison->getMenu()->getChoice() == 4)
            {
                choice = poison->getMenu()->getChoice();
                return;
            }
        }   
    }
    else if (nextRoom == "Freeze Space" && alive == true)
    {
        printSpaces();
        if (freeze->getEntered() == 0)
        {
            freeze->printRDescrip();
            //Character * fMon = freeze->getMonster();
            battle(freeze->getMonster());
            //delete fMon;
            if (alive == true)
            {
                freeze->getMenu()->display();
                if (freeze->getMenu()->getChoice() == 1)
                {
                    cout << "<Moving to the No Oxygen Space>" << endl;
                    nextRoom = freeze->getRight()->getRName();
                    prevRoom = freeze->getRName();
                    std::cin.clear();
                    std::cin.ignore();
                    std::cin.clear();
                    pos = 4;
                    turn++;
                }
                else if (freeze->getMenu()->getChoice() == 2)
                {
                    cout << "<Moving back to the Poison Space>" << endl;
                    nextRoom = freeze->getBottom()->getRName();
                    prevRoom = freeze->getRName();
                    std::cin.clear();
                    std::cin.ignore();
                    std::cin.clear();
                    pos = 2;
                    turn++;
                }
                else if (freeze->getMenu()->getChoice() == 3)
                {
                    clear();
                    hero->usePotion();
                    turn++;
                }
                else if (freeze->getMenu()->getChoice() == 4)
                {
                    choice = freeze->getMenu()->getChoice();
                    return;
                }
            }
        }
        else if (alive == true)
        {
            freeze->printRDescrip();
            freeze->getMenu()->display();
            if (freeze->getMenu()->getChoice() == 1)
            {
                cout << "<Moving to the No Oxygen Space>" << endl;
                nextRoom = freeze->getRight()->getRName();
                prevRoom = freeze->getRName();
                std::cin.clear();
                std::cin.ignore();
                std::cin.clear();
                pos = 4;
                turn++;
            }
            else if (freeze->getMenu()->getChoice() == 2)
            {
                cout << "<Moving back to the Poison Space>" << endl;
                nextRoom = freeze->getBottom()->getRName();
                prevRoom = freeze->getRName();
                std::cin.clear();
                std::cin.ignore();
                std::cin.clear();
                pos = 2;
                turn++;
            }
            else if (freeze->getMenu()->getChoice() == 3)
            {
                clear();
                hero->usePotion();
                turn++;
            }
            else if (freeze->getMenu()->getChoice() == 4)
            {
                choice = freeze->getMenu()->getChoice();
                return;
            }
        }
    }
    else if (nextRoom == "No Air Space" && alive == true)
    {
        printSpaces();
        if (noAir->getEntered() == 0)
        {
            noAir->printRDescrip();
            //Character * airMon = noAir->getMonster();
            battle(noAir->getMonster());

            if (alive == true)
            {
                noAir->getMenu()->display();
                if (noAir->getMenu()->getChoice() == 1)
                {
                    cout << "<Moving to the Boss Space>" << endl;
                    nextRoom = noAir->getTop()->getRName();
                    prevRoom = noAir->getRName();
                    std::cin.clear();
                    std::cin.ignore();
                    std::cin.clear();
                    pos = 5;
                    turn++;
                }
                else if (noAir->getMenu()->getChoice() == 2)
                {
                    cout << "<Moving back to the Freeze Space>" << endl;
                    nextRoom = noAir->getLeft()->getRName();
                    prevRoom = noAir->getRName();
                    std::cin.clear();
                    std::cin.ignore();
                    std::cin.clear();
                    pos = 3;
                    turn++;
                }
                else if (noAir->getMenu()->getChoice() == 3)
                {
                    clear();
                    hero->usePotion();
                    turn++;
                }
                else if (noAir->getMenu()->getChoice() == 4)
                {
                    choice = noAir->getMenu()->getChoice();
                    return;
                }
            }
        }
        else if (alive == true)
        {
            noAir->printRDescrip();
            noAir->getMenu()->display();
            if (noAir->getMenu()->getChoice() == 1)
            {
                cout << "<Moving to the Boss Room>" << endl;
                nextRoom = noAir->getTop()->getRName();
                prevRoom = noAir->getRName();
                std::cin.clear();
                std::cin.ignore();
                std::cin.clear();
                pos = 5;
                turn++;
            }
            else if (noAir->getMenu()->getChoice() == 2)
            {
                cout << "<Moving back to the Freeze Space>" << endl;
                nextRoom = noAir->getLeft()->getRName();
                prevRoom = noAir->getRName();
                std::cin.clear();
                std::cin.ignore();
                std::cin.clear();
                pos = 3;
                turn++;
            }
            else if (noAir->getMenu()->getChoice() == 3)
            {
                clear();
                hero->usePotion();
                turn++;
            }
            else if (noAir->getMenu()->getChoice() == 4)
            {
                choice = noAir->getMenu()->getChoice();
                return;
            }
        }
    }
    else if (nextRoom == "Boss Space" && alive == true)
    {
        printSpaces();
        if (boss->getEntered() == 0)
        {
            boss->printRDescrip();
            //Character * airMon = noAir->getMonster();
            battle(boss->getMonster());
      
            if (alive == true)
            {
                boss->getMenu()->display();
                if (boss->getMenu()->getChoice() == 1)
                {
                    cout << "<Moving to the Treasure Room>" << endl;
                    nextRoom = boss->getLeft()->getRName();
                    prevRoom = boss->getRName();
                    std::cin.clear();
                    std::cin.ignore();
                    std::cin.clear();
                    pos = 6;
                    turn++;
                }
                else if (boss->getMenu()->getChoice() == 2)
                {
                    cout << "<Moving back to the No Air Space>" << endl;
                    nextRoom = boss->getBottom()->getRName();
                    prevRoom = boss->getRName();
                    std::cin.clear();
                    std::cin.ignore();
                    std::cin.clear();
                    pos = 4;
                    turn++;
                }
                else if (boss->getMenu()->getChoice() == 3)
                {
                    clear();
                    hero->usePotion();
                    turn++;
                }
                else if (boss->getMenu()->getChoice() == 4)
                {
                    choice = boss->getMenu()->getChoice();
                    return;
                }
            }
        }
        else if (alive == true)
        {
            boss->printRDescrip();
            boss->getMenu()->display();
            if (boss->getMenu()->getChoice() == 1)
            {
                cout << "<Moving to the Treasure Room>" << endl;
                nextRoom = boss->getLeft()->getRName();
                prevRoom = boss->getRName();
                std::cin.clear();
                std::cin.ignore();
                std::cin.clear();
                pos = 6;
                turn++;
            }
            else if (boss->getMenu()->getChoice() == 2)
            {
                cout << "<Moving back to the No Air Space>" << endl;
                nextRoom = boss->getBottom()->getRName();
                prevRoom = boss->getRName();
                std::cin.clear();
                std::cin.ignore();
                std::cin.clear();
                pos = 4;
                turn++;
            }
            else if (boss->getMenu()->getChoice() == 3)
            {
                clear();
                hero->usePotion();
                turn++;
            }
            else if (boss->getMenu()->getChoice() == 4)
            {
                choice = boss->getMenu()->getChoice();
                return;
            }
        }
    }
    else if (nextRoom == "Treasure Space")
    {
        printSpaces();
        alive = false;
    }
    else
    {
        return;
    }

}

void Game::clear()
{
    for (int i = 0; i < 70; i++)
    {
        cout << endl;
    }
}

// battle system very similar to Project 4 
// each Character object attacks with a dice roll
void Game::battle(Character * m)
{
    int airCount = 12;
    cout << "<<< A wild " << m->getType() << " appears!! >>> " << endl;
    while (hero->getStrength() > 0 && m->getStrength() > 0)
    {
        if (m->getType() == "No Air Monster")
        {
            cout << "<Losing Oxygen " << airCount << " turns left>" << endl;
        }
        std::cin.clear();
        std::cin.ignore();
        std::cin.clear();
        cout << "Turn: " << turn << endl;
        int damage = 0;
        int attack1 = hero->attack();
        int defend2 = m->defend();

        // implement Freeze ability 
        if (m->getType() == "Freeze Monster")
        {
            if (turn % 2 == 0)
            {
                cout << "<< Maximus is FROZEN and cannot attack >> " << endl;
                attack1 = 0;
            }  
        }

        if (attack1 > defend2)
        {
            damage = attack1 - defend2;
            m->setStrength(m->getStrength()-damage);
            cout << endl << "Maximus" << " does " << damage << " points of damage to " 
            << m->getType() << endl;
        }
        else 
        {
            cout << endl << m->getType() << " defends " << hero->getName() << " attack!" << endl;\
            damage = 0;
        }
        
        
       

        // Print stats out
        cout << "   <<   Stats   >>" << endl;
        cout << "Attacker Type: " << hero->getType() << " " << hero->getName() << endl;
        cout << "Attack Dice roll: " << hero->getRollA() << endl;
        cout << "Defend Dice roll: " << m->getRollD() << endl;
        cout << "Total Damage: " << damage << endl;
        cout << "Monsters new Strength total: " << m->getStrength() << endl;
        
        if (m->getStrength() > 0)
        {
            int attack2 = m->attack();
            int defend1 = hero->defend();

            if (attack2 > defend1)
            {
                damage = attack2 - defend1;
                hero->setStrength(hero->getStrength()-damage);
                cout << endl << m->getType() << " does " << damage << " points of damage to " 
                << hero->getName() << endl;

               
            }
            else 
            {
                cout << endl << hero->getName() << " defends " << m->getType() << " attack!" << endl;
                damage = 0;
            }

            // Implement Poison ability
            if (m->getType() == "Poison Monster")
            {
                cout << "-- Maximus takes 1pt of poison damage --" << endl;
                hero->setStrength(hero->getStrength()-1);
            }

            // Print stats out
                cout << "   <<   Stats   >>" << endl;
                cout << "Attacker Type: " << m->getType() << " " << m->getName() << endl;
                cout << "Attack Dice roll: " << m->getRollA() << endl;
                cout << "Defend Dice roll: " << hero->getRollD() << endl;
                cout << "Total Damage: " << damage << endl;
                cout << hero->getName() << " new Strength total: " << hero->getStrength() << endl;
        }
        if (m->getType() == "No Air Monster")
        {

            airCount--;
            if (airCount == 0 && m->getStrength() > 0)
            {
                alive = false;
                hero->setStrength(0);
                airCount = 4;
                break;
            }
        }
        turn++;
    }

    // Monster is defeated, add a key to the Players key vector.
    if (m->getStrength() <= 0)
    {
        cout << endl << "Maximus defeated the " << m->getType() << endl;
        hero->setKeys(1);
        cout << "<Maximus obtains " << hero->getKeys() << " out of 4 keys!>" << endl << endl; 
    }
    else
    {
        cout << "Maximus is defeated. Try again?" << endl;
        alive = false;
    }

}

void Game::play()
{

    clear();
    begin.display();
    int deadAlive = 0;   // 0 = alive, 1 = dead;
    while (begin.getChoice() == 1)
    {
        clear();
        alive = true;
        cout << "Diablo: Text Version Dungeon Crawler" << endl << endl;
        cout << "Welcome to the game! This is a text based dungeon" << endl;
        cout << "crawler where your hero, Maximus, will start out in the beginner area" << endl;
        cout << "and make his way through each area of the dungeon." << endl;
        cout << "Each area has a special effect on the hero ranging from" << endl;
        cout << "poisoning them to freezing their attacks." << endl;
        cout << "In each area you will encounter a monster and collect a key" << endl;
        cout << "for each monster you kill. Collect all the keys to unlock the" << endl;
        cout << "treasure room!" << endl;
        cout << "Good luck." << endl;

        std::cin.clear();
        std::cin.ignore();
        std::cin.clear();

        clear();

        
        
  
        while (alive == true)
        {
            if (choice == 4)
            {
                return;
            }
            else
            {
                clear();
                cout << endl << "Turn: " << turn << endl;
                spaceAction();
            }
        }

        begin.display();
        if (begin.getChoice() == 1)
        {
            //hero->setStrength(35);
            //hero->setPotions(3);
            delete hero;
            delete start;
            delete treasure;
            delete poison;
            delete freeze;
            delete noAir;
            delete boss;
            makeCharacter();
            makeSpaces();
            start->setEntered(0);
            poison->setEntered(0);
            freeze->setEntered(0);
            noAir->setEntered(0);

            pos = 1;
            nextRoom = "Starting Space";
            prevRoom = "Starting Space";
            turn = 0;
        }
    }
}
