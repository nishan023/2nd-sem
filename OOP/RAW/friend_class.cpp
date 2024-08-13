#include<iostream>
using namespace std;
class alpha
{
int x;
public:
    void setdata(int d)
    {
        x=d;

    }
    friend class beta;

};
class beta
{
public:
    void fun(alpha a)
    {
        cout<<a.x<<endl;
    }

};
int main()
{

    alpha a;
    a.setdata(23);
    beta b;
    b.fun(a);
    return 0;
}
