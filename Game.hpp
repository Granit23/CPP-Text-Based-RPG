/******************************************************************************
 * Author: Granit Arifi
 * Date: 11/20/2018
 * Description: Game class that handles the logic for the dungeon crawler
 * ***************************************************************************/

#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include <vector>
#include "Menu.hpp"
#include "Space.hpp"
#include "Character.hpp"
#include "Player.hpp"
#include "StartingSpace.hpp"
#include "PoisonSpace.hpp"
#include "FreezeSpace.hpp"
#include "NoAirSpace.hpp"
#include "BossSpace.hpp"
#include "TreasureSpace.hpp"

using std::string;
using std::vector;



class Game 
{
    private:
        int turn = 1;
        Menu begin;
        Player *hero;
        StartingSpace *start;
        PoisonSpace *poison;
        FreezeSpace *freeze;
        NoAirSpace *noAir;
        BossSpace *boss;
        TreasureSpace *treasure;
        string nextRoom = "Starting Space";
        string prevRoom = "Starting Space";
        int pos = 1;
        int choice;
        bool alive = true;
    public:
        Game();
        ~Game();
        void spaceChooser();
        void setMenu();
        void makeCharacter();
        void makeSpaces();
        void printSpaces();
        void battle(Character *);
        void spaceAction();
        void play();
        void clear();
        

};

#endif