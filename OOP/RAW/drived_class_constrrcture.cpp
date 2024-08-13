// derived class constructor
#include <iostream>
using namespace std;
class A
{
protected:
    int adata;

public:
    A(int a)
    {
        adata = a;
    }
};
class B : public A
{
    int bdata;

public:
    B(int a, int b) : A(a)
    {
        bdata = b;
    }
    void show()
    {
        cout << "Adata=" << adata << endl
             << "Bdata=" << bdata << endl;
    }
};
int main()
{
    B b(4, 6);
    b.show();
    return 0;
}