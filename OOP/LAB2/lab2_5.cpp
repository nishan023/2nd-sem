/*5. Define a class BOOK with the following specifications :
Private members of the class BOOK are: BOOK NO (integer type),
BOOKTITLE (20 characters), PRICE (float), TOTAL_COST() (A function to
calculate the total cost for N number of copies where N is passed to the
function as argument).
Public members of the class BOOK are: INPUT() – function to read
BOOK_NO., BOOKTITLE, PRICE and PURCHASE() – function to ask the
user to input the number of copies to be purchased. It invokes
TOTAL_COST() and prints the total cost to be paid by the user.
Note: You are also required to give detailed function definitions.*/
#include <iostream>
#include <string>
using namespace std;
class BOOK
{
private:
    int bookNo;
    string bookTitle;
    float price;
    void TOTAL_COST(int numCopies)
    {
        float totalCost = price * numCopies;
        cout << "Total Cost: $" << totalCost << endl;
    }

public:
    void INPUT()
    {
        cout << "Enter the Book Number: ";
        cin >> bookNo;
        cin.ignore();
        cout << "Enter the Book Title: ";
        getline(cin, bookTitle);
        cout << "Enter the Price: $";
        cin >> price;
    }

    void PURCHASE()
    {
        int numCopies;
        cout << "Enter the number of copies to be purchased: ";
        cin >> numCopies;
        TOTAL_COST(numCopies);
    }
};

int main()
{
    BOOK b;
    b.INPUT();
    cout << endl;
    b.PURCHASE();

    return 0;
}