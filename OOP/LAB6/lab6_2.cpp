// 2. Write a program to show the use of class templates.
#include <iostream>
using namespace std;
template <class T>
class mypair
{
    T a, b;

public:
    mypair(T first, T second)
    {
        a = first;
        b = second;
    }
    T getmax()
    {
        T retval;
        retval = a > b ? a : b;
        return retval;
    }
};
int main()
{
    mypair<int> obj(100, 125);
    cout << obj.getmax();
    return 0;
}