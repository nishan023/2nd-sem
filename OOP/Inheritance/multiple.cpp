// ?multiple inheritance
#include <iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "This is vehicle class" << endl;
    }
};
class fourwheeler
{
public:
    fourwheeler()
    {
        cout << "This is fourwheeler class" << endl;
    }
};
class car : public vehicle, public fourwheeler
{
    // *data members
};
int main()
{
    car c;
    return 0;
}