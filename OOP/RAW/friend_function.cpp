#include <iostream>
using namespace std;
class sample
{
private:
    int a,b;
    friend float mean(sample s);
public:
void setdata()
{
    a=6;
    b=8;
}
};
float mean(sample s)
{
    return(s.a+s.b)/2;

}
int main()
{
    sample x;
    x.setdata();
    cout<<"Mean is "<<mean(x);
    return 0;
}