/*12.Write a program which accepts amount as integer and display total number
of Notes of Rs. 500, 100, 50, 20, 10, 5 and 1. For example, when user enter a
number, 575, the results would be like this:
500 : 1
100 : 0
50 : 1
20 : 1
10 : 0
5 : 1
1 : 0
*/
#include <iostream>
using namespace std;

int main()
{
    int amount;
    int note[] = {500, 100, 50, 20, 10, 5, 1};
    int notes[7] = {0};
    cout << "Enter the amount: ";
    cin >> amount;

    for (int i = 0; i < 7; i++)
    {
        if (amount >= note[i])
        {
            notes[i] = amount / note[i];
            amount %= note[i];
        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout << note[i] << ": " << notes[i] << endl;
    }

    return 0;
}
