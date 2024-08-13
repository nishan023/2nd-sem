#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "This is class A" << endl;
    }
};
class B
{
public:
    void show()
    {
        cout << "This is class B" << endl;
    }
};
class C : public A, public B
{
    // data members
};
int main()
{
    C c;
    // c.show();  --> this is ambigious we can fix it by using scope resolution operator
    c.A::show();
    c.B::show();
    return 0;
}
