#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("text.txt", ios::app);
    file << " Some text appended";
    cout << "Text appended successfully!";
    file.close();
    return 0;
}
