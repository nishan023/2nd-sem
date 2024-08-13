//*A friend class is a class that has access to the private members of another class.
//* This is done by declaring the other class as a friend of the friend class.

//3. Write a program to show the use of friend function and friend class.
#include <iostream>
using namespace std;
class alpha
{
private:
    int x;

public:
    void setdata(int d)
    {
        x = d;
    }
    friend class beta;
};
class beta
{
public:
    void fun(alpha a)
    {
        cout << a.x << endl;
    }
};
int main()
{
    alpha a;
    a.setdata(5);
    beta b;
    b.fun(a);
    return 0;
}
