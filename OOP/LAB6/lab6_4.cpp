// 4. Write a program to show the use of multiple catch statements.
#include <iostream>
using namespace std;
void test(int x)
{
    try
    {
        if (x == 0)
            throw x;
        if (x == 1)
            throw 1.0;
    }
    catch (int m)
    {
        cout << "Caught an integer" << endl;
    }
    catch (double d)
    {
        cout << "caught a double " << endl;
    }
}
int main()
{
    test(0);
    test(1);
    return 0;
}