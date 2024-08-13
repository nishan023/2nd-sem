/*
2. Write a program to display the following output using a single cout
statement.
Subject        Marks
Mathematics      90
Computer	 77
Chemistry	 69
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int math=90,comp=77,che=69;
    cout<<"Subject"<<setw(14)<<"Marks"<<endl
    <<"Mathematics"<<setw(10)<<math<<endl
    <<"Computer"<<setw(13)<<comp<<endl
    <<"Chemistry"<<setw(12)<<che<<endl;
    return 0;
    
}