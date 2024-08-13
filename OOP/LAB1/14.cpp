
/*

14.Write a program which accepts days as integer and display total number of
years, months and days in it. For example: If user input as 856 days the
output should be 2 years 4 months 6 days.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days;
    cout << "Enter the number of days: ";
    cin >> days;
    int years = days / 365;
    int months = (days % 365) / 30;
    int remainingDays = (days % 365) % 30;

    cout << "Years " << setw(2) << ":" << years << endl;
    cout << "Months " << setw(1) << ":" << months << endl;
    cout << "Days " << setw(3) << ":" << remainingDays << endl;

    return 0;
}
