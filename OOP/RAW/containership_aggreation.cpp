#include <iostream>
using namespace std;
class Employee
{
private:
    int eid, esal;

public:
    void getdata()
    {
        cin.ignore();
        cout << "Enter ID and salary of employee." << endl;
        cin >> eid >> esal;
    }
    void display()
    {
        cout << "Employee ID:" << eid << endl
             << "Salary:" << esal << endl;
    }
};
class Company
{
    int cid;
    char cname;
    Employee e;

public:
    void getdata()
    {
        cin.ignore();
        cout << "Enter name and ID of company:" << endl;
        cin >> cname >> cid;
        e.getdata();
    }
    void display()
    {
        cout << "Company name:" << cname << endl
             << "Company ID:" << cid << endl;
        e.display();
    }
};
int main()
{
    Company c;
    c.getdata();
    c.display();
    return 0;
}