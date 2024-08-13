/*
4. Write a program which accept temperature in Fahrenheit and print it in
centigrade.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float fahrenheit, celsius;
    cout << "Enter the temperature in Fahrenheit: " << endl;
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << setprecision(4) << celsius << endl;

    return 0;
}
