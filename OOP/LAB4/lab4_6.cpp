/*6. All the banks operating in India are controlled by RBI. RBI has set a well defined guideline (e.g.
minimum interest rate, minimum balance allowed, maximum withdrawal limit etc) which all
banks must follow. For example, suppose RBI has set minimum interest rate applicable to a
saving bank account to be 4% annually; however, banks are free to use 4% interest rate or to set
any rates above it.
Write a program to implement bank functionality in the above scenario. Note: Create few classes
namely Customer, Account, RBI (Base Class) and few derived classes (SBI, ICICI, PNB etc).
Assume and implement required member variables and functions in each class.*/
#include <iostream>
using namespace std;

class RBI {
protected:
    double min_interest_rate;
    double min_balance;
    double max_withdrawal;

public:
    RBI() {
        min_interest_rate = 4.0;
        min_balance = 1000;
        max_withdrawal = 20000;
    }

    double get_min_interest_rate() {
        return min_interest_rate;
    }

    double get_min_balance() {
        return min_balance;
    }

    double get_max_withdrawal() {
        return max_withdrawal;
    }
};

class Bank : public RBI {
protected:
    string name;

public:
    Bank(string name) : RBI() {
        this->name = name;
        cout << "Bank Name: " << this->name << endl;
        cout << "Interest Rate: " << this->min_interest_rate << "%" << endl;
        cout << "Minimum Balance Allowed: " << this->min_balance << endl;
        cout << "Minimum Withdrawal Limit: " << this->max_withdrawal << endl;
    }

    string get_name() {
        return name;
    }
};

class SBI : public Bank {
public:
    SBI() : Bank("SBI") {}
};

class ICICI : public Bank {
public:
    ICICI() : Bank("ICICI") {}
};

class PNB : public Bank {
public:
    PNB() : Bank("PNB") {}
};

class Customer {
private:
    string name;
    Bank *bank;

public:
    Customer(string name, Bank *bank) {
        this->name = name;
        this->bank = bank;
        cout << "Customer Name: " << this->name << endl;
        cout << "Bank Name: " << this->bank->get_name() << endl;
    }

    void withdraw(double amount) {
        if (amount > bank->get_max_withdrawal()) {
            cout << "Withdrawal amount exceeds maximum withdrawal limit of " << bank->get_max_withdrawal() << endl;
            return;
        }
        cout << "Withdrawal successful. Amount: " << amount << endl;
    }
};


int main() {
    SBI sbi_bank;
    ICICI icici_bank;
    PNB pnb_bank;

    string name;
    double withdrawal_amt;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter withdrawal amount: ";
    cin >> withdrawal_amt;

    Customer cust1(name, &sbi_bank);
    cust1.withdraw(withdrawal_amt);

    return 0;
}
