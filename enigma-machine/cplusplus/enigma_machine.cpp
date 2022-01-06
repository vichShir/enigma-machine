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
    Rotor rotor_I;
    Rotor rotor_II;
    Rotor rotor_III;

    char letterMap_I[26] = {
        'E', // <- A
        'K', // <- B
        'M', // <- C
        'F', // <- D
        'L', // <- E
        'G', // <- F
        'D', // <- G
        'Q', // <- H
        'V', // <- I
        'Z', // <- J
        'N', // <- K
        'T', // <- L
        'O', // <- M
        'W', // <- N
        'Y', // <- O
        'H', // <- P
        'X', // <- Q
        'U', // <- R
        'S', // <- S
        'P', // <- T
        'A', // <- U
        'I', // <- V
        'B', // <- W
        'R', // <- X
        'C', // <- Y
        'J'  // <- Z
    };

    keyboard.listen();
    plug.pass(keyboard.getLetter());

    rotor_I.setConfiguration(letterMap_I);
    rotor_I.pass(plug.getSwitchedLetter());

    cout << "Keyboard Input: " << keyboard.getLetter() << endl;
    cout << "Plugboard output: " << plug.getSwitchedLetter() << endl;
    cout << "Rotor I output: " << rotor_I.getSwitchedLetter() << endl;
}