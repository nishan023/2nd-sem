
/*
9. Write a program to check whether the given number is positive or negative
(using ? : ternary operator)
*/
#include <iostream>
using namespace std;

int main()
{
    int number;
    string result;
    cout << "Enter a number: " << endl;
    cin >> number;
    result = (number >= 0) ? "Positive" : "Negative";
    cout << "The number is " << result << endl;

    return 0;
}
