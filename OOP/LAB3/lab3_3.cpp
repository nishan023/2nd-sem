//3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.
#include<iostream>
using namespace std;
class cmp
{
    public:
    int real,img;
    cmp(int r=0,int i=0)
    {
        this->real=r;
        this->img=i;
    }
    friend cmp operator+(cmp &c1,cmp&c2);    
};
cmp operator+(cmp &c1,cmp &c2)
{
    cmp c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return c3;
}
int main()
{
    cmp c1(2,3),c2(3,4),c3;
    c3=c1+c2;
   cout << "Sum:" << c3.real << " + " << c3.img << "i" << endl;
   return 0;
}