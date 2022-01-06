#include <iostream>
#include <string>
#include "headers/rotor.h"

using namespace std;

void Rotor::pass(char signal)
{
    switchedLetter = letterMap[((int) signal) - 65];
}

void Rotor::setConfiguration(char* map)
{
    letterMap = map;
}

char Rotor::getSwitchedLetter() { return switchedLetter; }