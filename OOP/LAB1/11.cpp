/*
11.Write a program which input three numbers and display the largest number
using ternary operator.
*/
#include <iostream>
using namespace std;

int main()
{
    int largestNumber, num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    largestNumber = (num1 >= num2 && num1 >= num3) ? num1 : (num2 >= num1 && num2 >= num3) ? num2
                                                                                           : num3;

    cout << "The largest number is: " << largestNumber << endl;

    return 0;
}
