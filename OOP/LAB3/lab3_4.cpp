//4. Consider a class Matrix of size 3X3. Overload the – (unary) should negate the numbers stored in the object.
#include <iostream>
using namespace std;
class Matrix
{
    int m[3][3];

public:
    void getmatrix()
    {
      
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> m[i][j];
            }
        }
    }
    Matrix operator-()
    {
        Matrix res;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                res.m[i][j] = -m[i][j];
            }
        }
        return res;
    }
    void display()
    {

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{

    Matrix m, n;
      cout << "Enter the matrix elements" << endl;
    m.getmatrix();
    cout << "Original matrix" << endl;
    m.display();
    n = -m;
    cout << "Negated matrix" << endl;
    n.display();
    return 0;
}
