/******************************************************************************
 * Program Name: Diablo
 * Author: Granit Arifi
 * Date: 11/28/2018
 * Description: Implements a text-based, single player dungeon crawler game
 * using knowldege gained from the CS 162 course.
 * ***************************************************************************/

#include "Game.hpp"

int main()
{
    srand(time(NULL));
    Game g;
    g.play();
}