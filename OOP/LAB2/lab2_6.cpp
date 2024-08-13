#include <iostream>
#include <string>

using namespace std;

class REPORT
{
private:
    int adno;
    string name;
    float marks[5];
    float average;
    float GETAVG()
    {
        float sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum = sum + marks[i];
        }
        average = sum / 5;
        return average;
    }

public:
    void READINFO()
    {
        do
        {
            cout << "Enter the Admissiom Number:";
            cin >> adno;
        } while (adno < 1000 || adno > 9999);
        /*
         cout << "Enter the Admission Number: ";
         cin >> adno;
         while (adno < 1000 || adno > 9999)
        {
             cout << "Invalid Admission number. Please enter a 4-digit code.";
            cin >> adno;
        }
        */
        cin.ignore();
        cout << "Enter the Name: ";
        getline(cin, name);
        cout << "Enter the Marks for 5 Subjects:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
        average = GETAVG();
    }

    void DISPLAYINFO()
    {
        cout << "Admission Number: " << adno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks for 5 Subjects:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
        cout << "Average Marks: " << average << endl;
    }
};

int main()
{
    REPORT r;
    r.READINFO();
    cout << endl;
    r.DISPLAYINFO();
    return 0;
}