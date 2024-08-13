/*2. Define a class batsman with the following specifications:
Private members: bcode (4 digits code number), bname (20 characters),
innings (integer), notout (integer), runs (integer), batavg (calculated
according to the formula: batavg =runs/[innings-notout]), calcavg() –
Function to compute batavg
Public members: readdata() – Function to accept value from bcode, name,
innings, notout and invoke the function and displaydata() – Function to
display the data members on the screen.*/
#include <iostream>
using namespace std;
class batsman
{
private:
    int bcode;
    char bname[20];
    int innings;
    int notout;
    int runs;
    int batavg;
    float calcavg()
    {
        return runs / (innings - notout);
    }

public:
    void readdata()
    {
        cout << "Enter the batsman code (4 digits): ";
        cin >> bcode;
        while (bcode < 1000 || bcode > 9999)
        {
            cout << "Invalid batsman code. Please enter a 4-digit code: ";
            cin >> bcode;
        }
        cout << "Enter the batsman name: ";
        cin >> bname;
        cout << "Enter the number of innings: ";
        cin >> innings;
        cout << "Enter the number of times not out: ";
        cin >> notout;
        cout << "Enter the total runs scored: ";
        cin >> runs;
        batavg = calcavg();
    }

    void displaydata()
    {
        cout << endl;
        cout << "Batsman Code: " << bcode << endl;
        cout << "Batsman Name: " << bname << endl;
        cout << "Innings: " << innings << endl;
        cout << "Not Out: " << notout << endl;
        cout << "Runs: " << runs << endl;
        cout << "Batting Average: " << batavg << endl;
    }
};

int main()
{
    batsman b;
    b.readdata();
    b.displaydata();
    return 0;
}