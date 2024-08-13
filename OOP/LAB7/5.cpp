#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    fstream myfile("myfile.txt");
    myfile<<"Texas International College.";
    myfile.seekg(6,ios::beg);
    char A[21];
    myfile.read(A,21);
    A[21]=0;
    cout<<A<<endl;
    myfile.close();

}
