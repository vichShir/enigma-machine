#include <iostream>
#include <string>
#include "headers/plugboard.h"

using namespace std;

void Plugboard::pass(char signal)
{
    switchedLetter = letterMap[((int) signal) - 65];
}

char Plugboard::getSwitchedLetter() { return switchedLetter; }