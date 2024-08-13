/*
8. Write a program to calculate area of circle.
*/
#include <iostream>
#include <iomanip>
#define pi 3.14
using namespace std;
int main()
{
    float rad, area;
    cout << "Enter the radius of cicle" << endl;
    cin >> rad;
    area = pi * rad * rad;
    cout << "The area of circle is " << area << endl;
    return 0;
}
