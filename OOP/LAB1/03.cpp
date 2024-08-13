/*
3. Write a program which accept two numbers and print their sum.
*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, sum;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << "The sum is:" << sum << endl;
    return 0;
}