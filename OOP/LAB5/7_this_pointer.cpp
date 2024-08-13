//7. Write a program to show the use of “this” pointer.

#include <iostream>
using namespace std;
class sample
{
    int a, b;

public:
    void input(int a, int b)
    {
        this->a = a + b;
        this->b = a - b;
    }
    void display()
    {
        cout << "a=" << a << endl
             << "b=" << b << endl;
    }
};
int main()
{
    sample x;
    x.input(6, 4);
    x.display();
    return 0;
}