#include <iostream>
#include <string>
#include "headers/keyboard.h"

using namespace std;

struct inputIOException : public exception
{
   const char* what() const throw()
   {
      return "Invalid input! Enter a [a-z] input\n";
   }
};

char Keyboard::getLetter() { return letter; }

void Keyboard::listen()
{  
    try
    {
        char c;
        cout << "Enter a letter: ";
        cin >> c;
        checkInput(c);
        letter = toupper(c);
    }
    catch(const inputIOException& e)
    {
        cerr << e.what();
    }
}

void Keyboard::checkInput(char c)
{
    if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
    {
        throw inputIOException();
    }
}