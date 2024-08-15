#include "bits/stdc++.h"
using namespace std;

class ATM
{

private:
    int accBal;
    int pin;

public:
    // constructors

    ATM()
    {
        cout << "Default Constructor ..." << endl;
    }

    ATM(int balance, int userPin)
    {
        this->accBal = balance;
        this->pin = userPin;
        cout << "Constructor is called ." << endl;
    }

    // methods

    void withdraw(int amount, int enteredPIN)
    {
        if (enteredPIN == pin)
        {
            if (amount <= accBal)
            {
                accBal -= amount;
                cout << "Withdrawal Successfull ." << endl
                     << "Remaining Balance is : $ " << accBal << endl;
            }
            else
            {
                cout << "insuffiecient fund" << endl;
            }
        }
        else
        {
            cout << "Incorrect Pin" << endl;
        }
    }

    void checkBal(int pin)
    {
        if (this->pin == pin)
        {
            cout << "Your Balance is : $" << accBal << endl;
        }
        else
        {
            cout << "Incorrect Pin" << endl;
        }
    }

    // getter setters

    int getBal()
    {
        return this->accBal;
    }

    void setBal(int balance)
    {
        this->accBal = balance;
    }

    int getPin()
    {
        return this->pin;
    }

    void setPin(int pin)
    {
        this->pin = pin;
        cout<<"New Pin Generated."<<endl;
    }
};

int main()
{

    ATM myATM;

    myATM.setPin(1234);
    cout << "My atm pin is : " << myATM.getPin() << endl;

    myATM.setBal(10000);
    cout << "My balance is : " << myATM.getBal() << endl;

    myATM.checkBal(1234);
    myATM.withdraw(5000,1233);
    myATM.withdraw(5000,1234);
    myATM.setPin(2222);

    myATM.checkBal(1234);
    myATM.checkBal(2222);
    myATM.withdraw(5000,2222);
    myATM.withdraw(5000,2222);
}