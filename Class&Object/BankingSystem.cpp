#include <iostream>
using namespace std;

class BankAccount
{
public:
    unsigned int Account_Number;
    string Holder_Name;
    float Balance;

    // Method to deposit money into the bank account
    void Deposit(int Amount)
    {
        cout << "The Deposit Amount is: " << Amount << endl;
        Balance += Amount; // Increase the balance by the deposited amount
    }

    // Method to withdraw money from the bank account
    void WithDraw(int Amount)
    {
        cout << "The Withdraw Amount is: " << Amount << endl;
        Balance -= Amount; // Decrease the balance by the withdrawn amount
    }

    // Method to display the account details and balance
    void Display_Balance()
    {
        cout << "Account Number is: " << Account_Number << endl;
        cout << "Account Holder Name is: " << Holder_Name << endl;
        cout << "Account Current Balance is: Rs. " << Balance << endl;
    }
};

int main()
{
    BankAccount B;

    // Setting initial values for the bank account B
    B.Account_Number = 2937018938;
    B.Holder_Name = "Romi Gupta";
    B.Balance = 10000;

    B.Deposit(2000); // Depositing 2000 into the account
    B.WithDraw(1000); // Withdrawing 1000 from the account
    B.Display_Balance(); // Displaying the account details and balance

    return 0;
}
