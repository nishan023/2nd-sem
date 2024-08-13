/*
13.Write a program which accepts a character and display its next character.
*/
#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter a character: ";
    cin >> character;
    char nextCharacter = character + 1;
    cout << "The next character is: " << nextCharacter << endl;

    return 0;
}
