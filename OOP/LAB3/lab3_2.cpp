//2. Write a C++ program to overload binary operator ‘+’ to add two complex numbers.
#include <iostream>
using namespace std;
class cmp
{
public:
    int real, img;
    cmp(int r = 0, int i = 0)
    {
        this->real = r;
        this->img = i;
    }
    cmp operator+(cmp &c3)
    {
        real += c3.real;
        img += c3.img;
        return cmp(real, img);
    }
};
int main()
{
    cmp c1(4, 5), c2(2, 3), c3;
    c3 = c1 + c2;
    cout << "Sum:" << c3.real << "+ " << c3.img << "i" << endl;
    return 0;
}
