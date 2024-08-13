//6. Write a program re-throwing an exception.
#include <iostream>
using namespace std;
void divide(int a, int b)
{
    try

    {
        if (b == 0)
            throw b;
        else
            cout << "Result =" << (float)a / b;
    }
    catch (int)
    {
        throw;
    }
}
int main()
{
    int a, b;
    cout << "Enter values of a and b:" << endl;
    cin >> a >> b;
    try
    {
        divide(a, b);
    }
    catch (int i)
    {
        cout << "Divide by zero exception:b=" << i;
    }
    cout << endl
         << "END";
    return 0;
}