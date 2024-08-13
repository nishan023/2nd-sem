#include <iostream>
using namespace std;
class student
{
private:
    int admno;
    char sname[20];
    float eng, math, sci, total;
    float ctotal()
    {
        return eng + math + sci;
    }

public:
    void takedata()
    {
        cout << "Enter admission number of student:" << endl;
        cin >> admno;
        cout << "Enter the name of student:" << endl;
        cin >> sname;
        cout << "Enter marks of English:" << endl;
        cin >> eng;
        cout << "Enter marks of Math:" << endl;
        cin >> math;
        cout << "Enter marks of Science:" << endl;
        cin >> sci;
        total = ctotal();
    }
    void showdata()
    {
        cout << endl;
        cout << "Admission number:" << admno << endl
             << "Student name:" << sname << endl
             << "English:" << eng << endl
             << "Math:" << math << endl
             << "Science:" << sci << endl
             << "Total:" << total << endl;
    }
};
int main()
{
    student s;
    s.takedata();
    s.showdata();
    return 0;
}