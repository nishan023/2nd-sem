//1. Write a program to show the use of virtual function.
#include <iostream>
using namespace std;
class Base
{
public:
    virtual void print()
    {
        cout << "Base Function" << endl;
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived Function" << endl;
    }
};
int main()
{
    Derived d1;
    Base *b1 = &d1;
    b1->print();
    return 0;
}