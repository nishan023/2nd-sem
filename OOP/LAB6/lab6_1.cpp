// 1. Write a program to show the use of function templates.
#include <iostream>
using namespace std;
template <class T>
T GetMax(T a, T b)
{
    T result;
    result = (a > b) ? a : b;
    return (result);
}
int main()
{
    int i = 5, j = 6, k;
    float l = 7.5, m = 6.6, n;
    k = GetMax<int>(i, j);
    n = GetMax<float>(l, m);
    cout << k << endl;
    cout << n << endl;
    return 0;
}