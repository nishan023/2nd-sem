
#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main()
{

    ifstream fs;
    ofstream fd;
    string str;
    char sourcefile[100], destinationfile[100];
    cout << "Enter source file with extension" << endl;
    gets(sourcefile);
    fs.open(sourcefile);
    if (!fs)
    {
        cout << "ERROR in opening source file.";
        exit(1);
    }
    cout << "Enter destination file with extension:" << endl;
    gets(destinationfile);
    fd.open(destinationfile);
    if (!fd)
    {

        cout << "ERROR in opening destination file.";
        fs.close();
        exit(2);
    }

    if (fs && fd)
    {
        while (getline(fs, str))
        {

            fd << str << endl;
        }
        cout << endl
             << "Source file data successfully copied." << endl;
    }
    else
    {
        cout << "Issue in writing content from another " << endl;
    }
    cout << "CHECK THE DESTINATION FILE" << endl;
    fs.close();
    fd.close();
    return 0;
}
