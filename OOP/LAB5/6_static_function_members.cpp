//6. Write a program to show the use of static function members.
#include <iostream>
using namespace std;
class MyClass
{
public:
    static int sum(int x, int y)
    {
        return x + y;
    }
};

int main()
{
    int num1 = 5;
    int num2 = 7;
    // Calling the static function without creating an instance of MyClass
    int result = MyClass::sum(num1, num2);
    cout << "Sum=" << result << endl;
    return 0;
}
