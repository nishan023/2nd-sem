/*3. Define a class TEST in C++ with following description:
Private Members: TestCode (of type integer), Description (of type string),
NoCandidate (of type integer), CenterReqd (of type integer), a member
function CALCNTR() to calculate and return the number of centers as
(NoCandidates/100+1)
Public Members: A function SCHEDULE() to allow user to enter values for
TestCode, Description, NoCandidate & call function CALCNTR() to
calculate the number of Centres
A function DISPTEST() to allow user to view the content of all the data
members*/
#include <iostream>
#include <string>

using namespace std;

class TEST
{
private:
    int TestCode;
    string Description;
    int NoCandidate;
    int CenterReqd;
    int CALCNTR()
    {
        CenterReqd = (NoCandidate / 100) + 1;
        return CenterReqd;
    }

public:
    void SCHEDULE()
    {
        cout << "Enter the Test Code: ";
        cin >> TestCode;
        cin.ignore();
        cout << "Enter the Description: ";
        getline(cin, Description);
        cout << "Enter the Number of Candidates: ";
        cin >> NoCandidate;
        CenterReqd = CALCNTR();
    }

    void DISPTEST()
    {
        cout << "Test Code: " << TestCode << endl;
        cout << "Description: " << Description << endl;
        cout << "Number of Candidates: " << NoCandidate << endl;
        cout << "Centers Required: " << CenterReqd << endl;
    }
};

int main()
{
    TEST test;
    test.SCHEDULE();
    cout << endl;
    test.DISPTEST();

    return 0;
}