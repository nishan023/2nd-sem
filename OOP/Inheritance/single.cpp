// single inheritance
#include<iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "This is vehicle class." << endl;
    }
};
class car : public vehicle
{
    // data members
};
int main()
{
    car c;
    return 0;
}
