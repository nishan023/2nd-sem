// multi level inheritance
#include <iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "This is class vehicle" << endl;
    }
};
class fourwheeler : public vehicle
{
public:
    fourwheeler()
    {
        cout << "This is fourwheeler" << endl;
    }
};
class car : public fourwheeler
{
public:
    car()
    {
        cout << "car has four wheels" << endl;
    }
};
int main()
{
    car c;
    return 0;
}