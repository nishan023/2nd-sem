//1.Write a C++ program to overload both unary operators (i.e. increment and decrement).
#include <iostream>
using namespace std;
class rectangle
{
    int length, breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void display()
    {
        cout << "Length=" << length <<" And breadth=" << breadth << endl;
    }
    void operator++()
    {
        ++length;  //! length=length+1
        ++breadth; //! breadth=breadth+1
    }
    void operator--()
    {
        --length;  //?length=length-1
        --breadth; //?breadth=breadth-1
    }
};
int main()
{
    rectangle r1(4, 5);
    ++r1;
    cout << "Increment" << endl;
    r1.display();
    cout << "Decrement" << endl;
    --r1;
    r1.display();
    return 0;
}
