#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    int number1 = 530;
    float number2 = 100.50;
    ofstream ofile("number.bin", ios::binary);
    ofile.write((char *)&number1, sizeof(number1));
    ofile.write((char *)&number2, sizeof(float));
    ofile.close();

    ifstream ifile("number.bin", ios::binary);
    ifile.read((char *)&number1, sizeof(number1));
    ifile.read((char *)&number2, sizeof(number2));
    cout << number1 << " " << number2 << endl;
    ifile.close();
}
