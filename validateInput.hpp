/******************************************************************************
 * Author: Granit Arifi
 * Date: 9/25/2018
 * Description: This function takes in a string, and two integers representing
 * minimum and maximum values for your input validation.
 * The function then checks if each character in the string is a digit as well
 * as checking if the string converted to an int exceeds the max value of an int
 * *****************************************************************************/

#ifndef VALIDATEINPUT_H
#define VALIDATEINPUT_H
#include <string>

using std::string;

bool validateInput(string, int, int);
string validateString(int);

#endif

