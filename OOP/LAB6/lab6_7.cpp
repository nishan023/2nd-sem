//7.Write a program to catch specified exceptions only
#include <iostream>
using namespace std;
void test(int x) throw(int, double)
{
    if (x == 0)
        throw x;
    if (x == 1)
        throw 1.0;
}
int main()
{
    try
    { 
        test(1);
    }
    catch (int m)
    {
        cout << "Caught an integer." << endl;
    }
    catch (double d)
    {
        cout << "Caught a double.";
    }
    return 0;
}
