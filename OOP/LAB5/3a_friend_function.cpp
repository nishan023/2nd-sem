
//*A friend function is a function that is declared in the class definition
//*but is not a member of the class. This means that the function can access
//* the private members of the class, even though it is not a member of the class.

//3. Write a program to show the use of friend function and friend class.
#include <iostream>
using namespace std;
class sample
{
private:
    int a, b;
    friend float mean(sample s);

public:
    void getdata()
    {
        a = 20;
        b = 12;
    }
};
float mean(sample s)
{
    return float(s.a + s.b) / 2;
}
int main()
{
    sample x;
    x.getdata();
    cout << "Mean=" << mean(x);
    return 0;
}
