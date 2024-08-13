#include <iostream>
using namespace std;
class Base
{
public:
    // ~Base() non virtual
    virtual ~Base()
    {
        cout << "Base  destroyed" << endl;
    }
};
class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "Derived Destoyed" << endl;
    }
};
int main()
{
    Base *p = new Derived;
    delete p;
    return 0;
}