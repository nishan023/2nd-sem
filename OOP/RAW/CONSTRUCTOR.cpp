#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,breadth;
    public:
    rectangle()   //DEFAULT CONSTRUCTOR
    {
        length=2;
        breadth=4;

    }
    rectangle(int l,int b)  // PARAMETRIZED CONSTRUCTOR 
    {
     length=l;
     breadth=b;

    }
    rectangle(rectangle &r) // COPY CONSYRUCTOR
    {
        length=r.length;
        breadth=r.breadth;
    }
    ~rectangle()
    {
        cout<<"Destructor is called"<<endl;
    }

    void display()
    {
        cout<<"Length is "<<length<<" and breadth is "<<breadth<<endl;

    }
};
int main()
{
    rectangle r1;
    rectangle r2(67 ,89);
    rectangle r3(r1);
   r1.display();
    r2.display();
    r3.display();
    
    return 0;

}
// write a code for constructro?



