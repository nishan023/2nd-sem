
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char buffer[100];
    int maxlength = 100;
    ofstream outf1("district.txt");
    outf1 << "| Kathmandu | Bhaktapur | Lalitpur | Dhading |";
    outf1.close();
    ofstream outf2("headquarter.txt");
    outf2 << "| Kathmandu \t| Bhaktapur \t| Patan \t| Dhading\t|";
    outf2.close();
    ifstream fin;
    fin.open("district.txt");
    while (fin.getline(buffer, maxlength))
    {
        cout << "\n"
             << buffer;
    }
    fin.close();
    fin.open("headquarter.txt");
    while (fin.getline(buffer, maxlength))
    {
        cout << "\n"
             << buffer;
    }
    fin.close();

    return 0;
}
