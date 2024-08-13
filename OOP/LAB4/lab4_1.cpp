/*1. Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale
which inherits both the above classes. Now, create a function in each of these classes which
prints "I am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as
well as Marine Animals" respectively. Now, create an object for each of the above class and try
calling
a. function of Mammals by the object of Mammal
b. function of MarineAnimal by the object of MarineAnimal
c. function of BlueWhale by the object of BlueWhale
d. function of each of its parent by the object of BlueWhale */
#include <iostream>
using namespace std;
class Mammals
{
public:
    void display()
    {
        cout << "I am mammal" << endl;
    }
};
class Marine_Animals
{
public:
    void display()
    {
        cout << "I am a marine animal" << endl;
    }
};
class Blue_Whale : public Mammals, public Marine_Animals
{
public:
    void display()
    {
        cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
    }
};
int main()
{
    Mammals m;
    m.display();
    Marine_Animals ma;
    ma.display();
    Blue_Whale bw;
    bw.display();
    bw.Mammals::display();
    bw.Marine_Animals::display();
    return 0;
}