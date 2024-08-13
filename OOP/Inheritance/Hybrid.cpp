// hybrid inheritance
#include <iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "This is a vehicle " << endl;
    }
};
class flare
{
public:
    flare()
    {
        cout << "Flare of vehicle " << endl;
    }
};
class car : public vehicle
{
    // data members
};
class bus : public vehicle, public flare
{
    // data members
};
int main()
{
    car c;
    bus b;
    return 0;
}