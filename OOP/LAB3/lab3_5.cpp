//5. Consider a class Matrix of size 3X3. Let m1 & m2 are two matrices. Find out m3=m1+m2 (use operator overloading).

#include<iostream>
using namespace std;
class Matrix
{
    int value[3][3];
    public:
    Matrix()
    {
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                value[i][j]=0;
            }
        }
    }
    void getdata()
    {
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                cin>>value[i][j];
            }
        }
    }
    Matrix operator +(Matrix &m)
    {
        Matrix r;
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
            r.value[i][j]=value[i][j]+m.value[i][j];
            }
            
        }
         return r;
    }
    void display()
    {
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                cout<<value[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Matrix m1,m2,sum;
    cout<<"Enter matrix elements for first matrix:"<<endl;
    m1.getdata();
    cout<<"Enter matrix elements for second matrix :"<<endl;
    m2.getdata();
    sum = m1+m2;
    cout<<"Sum of two matrices is: "<<endl;
    sum.display();
    return 0;
}