/*
6. Write a program which accepts a character and display its ASCII value.
*/
#include <iostream>
using namespace std;

int main()
{
    char character;
    int asciiValue;
    cout << "Enter a character: ";
    cin >> character;
    asciiValue = static_cast<int>(character);
    cout << "ASCII value of " << character << " is " << asciiValue << endl;

    return 0;
}