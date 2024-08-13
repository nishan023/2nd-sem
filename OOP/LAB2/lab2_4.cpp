/*4. Define a class in C++ with following description:
Private Members: A data member Flight number of type integer, A data
member Destination of type string, A data member Distance of type float, A
data member Fuel of type float, A member function CALFUEL() to calculate
the value of Fuel as per the following criteria
 Distance Fuel
 <=1000 500
 more than 1000 and <=2000 1100
 more than 2000 2200
Public Members: A function FEEDINFO() to allow user to enter values for
Flight Number, Destination, Distance & call function CALFUEL() to
calculate the quantity of Fuel and A function SHOWINFO() to allow user to
view the content of all the data members.*/

#include <iostream>
#include <string>
using namespace std;
class Flight
{
private:
    int flightNumber;
    string destination;
    float distance;
    float fuel;
    int CALFUEL()
    {
        if (distance <= 1000)
        {
            fuel = 500;
        }
        else if (distance > 1000 && distance <= 2000)
        {
            fuel = 1100;
        }
        else if (distance > 2000)
        {
            fuel = 2200;
        }
        return fuel;
    }

public:
    void FEEDINFO()
    {
        cout << "Enter the Flight Number: ";
        cin >> flightNumber;
        cin.ignore();

        cout << "Enter the Destination: ";
        getline(cin, destination);

        cout << "Enter the Distance: ";
        cin >> distance;

        fuel = CALFUEL();
    }

    void SHOWINFO()
    {
        cout << "Flight Number: " << flightNumber << endl;
        cout << "Destination: " << destination << endl;
        cout << "Distance: " << distance << " km" << endl;
        cout << "Fuel: " << fuel << " liters" << endl;
    }
};

int main()
{
    Flight f1;
    f1.FEEDINFO();
    cout << endl;
    f1.SHOWINFO();

    return 0;
}