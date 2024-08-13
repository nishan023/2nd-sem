
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    string str = "String written to file one char at a time";
    ofstream fout("myfile.txt");
    cout << "Writing to file..." << endl;
    for (int i = 0; i < str.length(); ++i)
    {
        fout.put(str[i]);
    }
    fout.close();
    cout << "File write completed" << endl;
    char ch;
    ifstream infile("myfile.txt");
    if (!infile.is_open())
    {
        cout << "Error opening the file for reading." << endl;
        return 1;
    }

    cout << "Contents of the file: ";
    while (infile.get(ch))
    {
        cout.put(ch);
    }
    cout << endl;

    infile.close();

    return 0;
}
