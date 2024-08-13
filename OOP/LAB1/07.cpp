/*
7. Write a program to swap the values of two variables.
*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, temp;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "Value after swapping" << endl;
    cout << "num1=" << num1 << endl
         << "num2=" << num2 << endl;
    return 0;
}
