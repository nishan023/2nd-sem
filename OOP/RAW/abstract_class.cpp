//Abstract class is a class with a pure virtual class and object of base class is cannot be created
#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void show()=0;
};
class Derived :public Base
{
    public:
    void show()
    {
        cout<<"Implementation of virtual function in Derived class"<<endl;
    }
};
int main()
{
    Base *b;
    //pointer to base class object
    Derived d;
    b=&d;//assigning address of derived class object into pointer variable
    b->show();
    d.show();
    return 0;
}