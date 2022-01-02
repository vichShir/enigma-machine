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

    keyboard.listen();

    cout << "Keyboard Input: " << keyboard.getLetter() << endl;
}