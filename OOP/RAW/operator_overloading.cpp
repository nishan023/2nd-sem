#include<iostream>
using namespace std;
class rectangle
{
private:
 int length;
    int breadth;
    public:
    rectangle(int l , int b)
    {
        length=l;
        breadth=b;

    }
    void display()
    {
        cout<<"Length:"<<length<<"and Breadth:"<<breadth<<endl;

    }
    void operator ++()
    {
        ++length; //length=length+1
        ++breadth; //breadth=breadth+1
    }
};
int main()
{
    rectangle r1(5,6);
    ++r1;
    r1.display();
    return 0;
}
