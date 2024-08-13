//hierarcical inheritance
#include<iostream>
using namespace std;
class vehicle
{
    public:
    vehicle()
    {
        cout<<"This is vehicle class"<<endl;

    }
};
    class car: public vehicle
    {
//data members
    };
    class bus: public vehicle
    {
//data members        
    };
    int main()
    {
        car c;
        bus b;
        return 0;
    }