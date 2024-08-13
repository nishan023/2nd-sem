/*4. We want to store the information of different vehicles. Create a class named Vehicle with two
data member named mileage and price. Create its two subclasses
a. *Car with data members to store ownership cost, warranty (by years), seating capacity
and fuel type (diesel or petrol).
b. *Bike with data members to store the number of cylinders, number of gears, cooling
type(air, liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches)
Make another two subclasses Audi and Ford of Car, each having a data member to store the
model type. Next, make two subclasses Bajaj and TVS, each having a data member to store the
make-type.
Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost,
warranty, seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS
bike.
*/
#include <iostream>
#include <stdio.h>
using namespace std;
class Vehicle
{

public:
    int mileage, price;
    // the universal data collector for every vehicles
    // this is to be called by cars or bikes
    void Vehicle_details()
    {
        cout << "Enter the mileage : ";
        cin >> mileage;
        cout << "Enter the price : ";
        cin >> price;
    }

    // universal data display board
    void Vehicle_display()
    {
        cout << "Mileage : " << mileage << endl;
        cout << "Price : " << price << endl;
    }
};

// subclass of vehicle i.e car
class Car : public Vehicle
{

public:
    int ownCost, Warranty, seatCap;
    char fuel_type[10];
    // car data collector
    void Car_info()
    {
        Vehicle::Vehicle_details();
        cout << "Enter the Ownership costs : ";
        cin >> ownCost;
        cout << "Enter the warranty (In years) : ";
        cin >> Warranty;
        cout << "Enter the seat capacity : ";
        cin >> seatCap;
        cout << "Enter the fuel type (Diesel or Petrol) : ";
        fflush(stdin);
        cin.getline(fuel_type, 10);
    }
    // display function
    void Car_display()
    {
        Vehicle::Vehicle_display();
        cout << "Ownership cost : " << ownCost << endl;
        cout << "Warrenty (In years): " << Warranty << endl;
        cout << "Seat capacity : " << seatCap << endl;
        cout << "Fuel Type : " << fuel_type << endl;
    }
};

// subclass of vehicle i.e bike
class Bike : public Vehicle
{
public:
    int cylinder, gears;
    char cooling_type[10], wheel_type[10];
    float fuel_tank_size;
    // bike data collector
    void Bike_info()
    {
        Vehicle::Vehicle_details();
        cout << "Enter No. of cylinders : ";
        cin >> cylinder;
        cout << "Enter No. of Gears : ";
        cin >> gears;
        cout << "Enter cooling type (Air or Liquid Oil) : ";
        cin >> cooling_type;
        fflush(stdin);
        cout << "Enter wheel type (Alloys or Spokes) : ";
        cin >> wheel_type;
        fflush(stdin);
        cout << "Enter fuel tank size (In liters): ";
        cin >> fuel_tank_size;
    }
    // display function
    void Bike_display()
    {

        Vehicle::Vehicle_display();
        cout << "No. of Cylinder : " << cylinder << endl;
        cout << "No. of Gears : " << gears << endl;
        cout << "Cooling type : " << cooling_type << endl;
        cout << "Fuel tank size (In liters) : " << fuel_tank_size << endl;
    }
};

// subclass of cars i.e audi
class Audi : public Car
{
private:
    char Car_model;

public:
    // audi data entry
    void Audi_data_entry()
    {
        cout << "Enter the Car Model (A/B/C/D/E): ";
        cin >> Car_model;
        Car::Car_info();
    }
    // display function
    void Audi_display()
    {

        cout << "\nModel Type : " << Car_model << endl;
        Car::Car_display();
    }
};

// subclass of cars i.e ford
class Ford : public Car
{
private:
    char Car_model; // A B C D E
public:
    // ford data entry
    void Ford_data_entry()
    {
        cout << "Enter the Car Model (A/B/C/D/E): ";
        cin >> Car_model;
        Car::Car_info();
    }
    // display function
    void Ford_display()
    {

        cout << "\nModel Type : " << Car_model << endl;
        Car::Car_display();
    }
};

// subclass of bike i.e Bajaj
class Bajaj : public Bike
{
private:
    char make_type; // A B C D E
public:
    // bajaj data entry

    void Bajaj_data_entry()
    {
        cout << "Enter the Make Type (A/B/C/D/E): ";
        cin >> make_type;
        Bike::Bike_info();
    }
    // display function
    void Bajaj_display()
    {

        cout << "\nMake Type : " << make_type << endl;
        Bike::Bike_display();
    }
};
// subclass of bike i.e tvs
class Tvs : public Bike
{
private:
    char make_type; // A B C D E
public:
    // Tvs data entry

    void Tvs_data_entry()
    {
        cout << "Enter the Make Type (A/B/C/D/E): ";
        cin >> make_type;
        Bike::Bike_info();
    }
    // display function
    void Tvs_display()
    {

        cout << "\nMake Type : " << make_type << endl;
        Bike::Bike_display();
    }
};

int main()
{
    Audi a;
    Ford f;
    Bajaj b;
    Tvs t;
    cout << "\n..Audi Data Entry.." << endl;
    a.Audi_data_entry();
    cout << "\n..Ford Data Entry.." << endl;
    f.Ford_data_entry();
    cout << "\n..Bajaj Data Entry.." << endl;
    b.Bajaj_data_entry();
    cout << "\n..TVS Data Entry.." << endl;
    t.Tvs_data_entry();

    // display time

    // car section
    cout << "\n..........CARS SECTION............\n"
         << endl;
    cout << "..............AUDI.............\n";
    a.Audi_display();
    cout << "\n..............FORD.............\n";
    f.Ford_display();

    // bike section
    cout << "\n...........BIKE SECTION............\n"
         << endl;
    cout << "..............BAJAJ............\n";
    b.Bajaj_display();
    cout << "\n...............TVS.............\n";
    t.Tvs_display();
    return 0;
}