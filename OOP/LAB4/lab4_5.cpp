/*5. Create a class named Shape with a function that prints "This is a shape". Create another class
named Polygon inheriting the Shape class with the same function that prints "Polygon is a
shape". Create two other classes named Rectangle and Triangle having the same function which
prints "Rectangle is a polygon" and "Triangle is a polygon" respectively. Again, make another
class named Square having the same function which prints "Square is a rectangle".
Now, try calling the function by the object of each of these classes.*/
#include <iostream>

using namespace std;

class Shape
{
public:
    void display()
    {
        cout << "This is a shape." << endl;
    }
};

class Polygon : public Shape
{
public:
    void display()
    {
        cout << "Polygon is a shape." << endl;
    }
};

class Rectangle : public Polygon
{
public:
    void display()
    {
        cout << "Rectangle is a polygon." << endl;
    }
};

class Triangle : public Polygon
{
public:
    void display()
    {
        cout << "Triangle is a polygon." << endl;
    }
};

class Square : public Rectangle
{
public:
    void display()
    {
        cout << "Square is a rectangle." << endl;
    }
};

int main()
{
    Square s;
    Triangle t;
    Rectangle r;
    Polygon p;
    Shape sh;
    sh.display();
    p.display();
    r.display();
    t.display();
    s.display();
    return 0;
}
