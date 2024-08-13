/*6. Create a class Fraction to represent a fraction of the type 2/5. Overload the 4 arithmetic
operators and = = to compare two fraction objects.*/
#include <iostream>
#include <algorithm>
using namespace std;
class Fraction
{
private:
    int x, y;

public:
    void getData(int a, int b)
    {
        this->x = a;
        this->y = b;
    }
    void display()
    {
        cout << x << "/" << y << endl;
    }
    void operator++()
    {
        x++;
        y++;
    }
    void operator--()
    {
        x--;
        y--;
    }
    Fraction operator+(Fraction &a)
    {
        int product;
        Fraction sum;

        if (y == a.y)
        {
            sum.x = (x + a.x);
            sum.y = y;
        }
        else
        {
            product = y * a.y;
            sum.y = product / __gcd(y, a.y);
            sum.x = (x * a.y + a.x * y);
        }
        return sum;
    }
    Fraction operator-(Fraction &b)
    {
        int product;
        Fraction sum;

        if (y == b.y)
        {
            sum.x = (x + b.x);
            sum.y = y;
        }
        else
        {
            product = y * b.y;
            sum.y = product / __gcd(y, b.y);
            sum.x = (x * b.y - b.x * y);
        }
        return sum;
    }
};
int main()
{
    Fraction f1, f2, f3, f4;
    f1.getData(3, 7);
    f2.getData(2, 5);

    // display originals
    cout << "\n....Original Fractions......" << endl;
    cout << "First: ";
    f1.display();
    cout << "Second: ";
    f2.display();

    // increment operator
    cout << "\n....Increament....." << endl;
    ++f1;
    ++f2;
    cout << "First: ";
    f1.display();
    cout << "Second: ";
    f2.display();

    // decrement operator
    cout << "\n.....Decrement......." << endl;
    --f1;
    --f2;
    cout << "First: ";
    f1.display();
    cout << "Second: ";
    f2.display();

    // adding both of them
    cout << "\n.....Addition......." << endl;
    f3 = f1 + f2;
    cout << "Sum: ";
    f3.display();

    // subtraction f2 from f1
    cout << "\n.....Subtraction......." << endl;
    f4 = f1 - f2;
    cout << "Difference: ";
    f4.display();
    return 0;
}