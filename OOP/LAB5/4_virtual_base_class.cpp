// 4. Write a program to show the use of virtual base class.

#include <iostream>
using namespace std;
class A
{
protected:
    int adata;
};
class B : virtual public A
{
};
class C : virtual public A
{
};
class D : public B, public C
{
public:
    D(int a)
    {
        adata = a;
    }
    int getdata()
    {
        return adata;
    }
};
int main()
{
    D d(6);
    cout << d.getdata();
    return 0;
}
