#include <iostream>
#include "headers/keyboard.h"
#include "headers/lampboard.h"
#include "headers/plugboard.h"
#include "headers/reflector.h"
#include "headers/rotor.h"

using namespace std;

int main()
{
    Keyboard keyboard;
    Plugboard plug;

    keyboard.listen();
    plug.pass(keyboard.getLetter());

    cout << "Keyboard Input: " << keyboard.getLetter() << endl;
    cout << "Plugboard output: " << plug.getSwitchedLetter() << endl;
}