/*5. Write a program which accept principle, rate and time from user and print
the simple interest.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float si, principle, rate, time;
    cout << "Enter  principle,rate and time" << endl;
    cin >> principle >> rate >> time;
    si = (principle * rate * time) / 100;
    cout << "Simple intrest is:" << setprecision(4) << si << endl;
    return 0;
}
