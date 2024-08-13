
//5. Write a program to show the use of abstract class and concrete class.
#include <iostream>
using namespace std;
class Polygon
{
protected:
    int width, height;

public:
    void setvalues(int a, int b)
    {
        width = a;
        height = b;
    }
    virtual int area(void) = 0;
};
class Rectangle : public Polygon
{
public:
    int area(void)
    {
        return (width * height);
    }
};
class Triangle : public Polygon
{
public:
    int area(void)
    {
        return (width * height / 2);
    }
};
int main()
{
    Rectangle r;
    Triangle t;
    Polygon *p;
    p = &r;
    p->setvalues(4, 5);
    cout << "Area of rectangle=" << p->area() << endl;
    p = &t;
    p->setvalues(6, 4);
    cout << "Area of triangle =" << p->area();
    return 0;
}