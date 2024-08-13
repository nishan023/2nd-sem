#include <iostream>
using namespace std;
class A
{
protected:
    int adata;
};
// class B: public A  --->ambiguity , it is solved by using virtual class
class B : virtual public A
{
    // data members
};
// class C:public A  --->ambiguity , it is solved by using virtual class
class C : virtual public A
{
    // data members
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
