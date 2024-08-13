/*
10.Write a program to check whether the given number is even or odd (using ?
: ternary operator)
*/
#include <iostream>
using namespace std;

int main()
{
    int number;
    string result;
    cout << "Enter a number: " << endl;
    cin >> number;
    result = (number % 2 == 0) ? "Even" : "Odd";
    cout << "The number is " << result << endl;

    return 0;
}
