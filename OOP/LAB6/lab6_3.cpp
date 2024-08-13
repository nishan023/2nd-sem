// 3. Write a program to show the use of exception handling (try, throw, & catch).
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter values of a and b:" << endl;
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw b;
        else
            cout << "Result =" << (float)a / b;
    }

    catch (int i)
    {
        cout << "Dvide by zero exception:b=" << i;
    }
    cout << endl
         << "END";
    return 0;
}