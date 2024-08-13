#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char data[100];
    ofstream outfile("file.txt", ios::in | ios::out);
    cout << "Writing to file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);
    outfile << data << endl;
    cout << "Enter your age: ";
    cin.getline(data, 100);
    outfile << data << endl;
    outfile.close();
    ifstream infile("file.txt");
    if (!infile.is_open())
    {
        cout << "Error opening the file for reading." << endl;
        return 1;
    }
    cout << "Reading from file" << endl;
    infile.getline(data, 100);
    cout << "Name: " << data << endl;
    infile.getline(data, 100);
    cout << "Age: " << data << endl;
    infile.close();
    return 0;
}
