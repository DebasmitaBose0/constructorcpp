//Write a c++ program to implement constructor overloading wrt real life scenario-
//1)default constructor
//2)parameterized constructor
//3)Copy constructor
//4)Constructor with default argument
//5)Destructor 
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string accountHolder;
    int accountNumber;
    double balance;

public:
    // 1. Default Constructor
    BankAccount() {
        accountHolder = "Unknown";
        accountNumber = 0;
        balance = 0.0;
        cout << "Default Constructor called - Account Holder: " << accountHolder << ", Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }

    // 2. Parameterized Constructor
    BankAccount(string name, int accNumber, double initialBalance) {
        accountHolder = name;
        accountNumber = accNumber;
        balance = initialBalance;
        cout << "Parameterized Constructor called - Account Holder: " << accountHolder << ", Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }

    // 3. Copy Constructor
    BankAccount(const BankAccount &other) {
        accountHolder = other.accountHolder;
        accountNumber = other.accountNumber;
        balance = other.balance;
        cout << "Copy Constructor called - Account Holder: " << accountHolder << ", Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }

    // 4. Constructor with Default Argument
    BankAccount(string name, int accNumber) {
        accountHolder = name;
        accountNumber = accNumber;
        balance = 100.0;  // Default balance
        cout << "Constructor with Default Argument called - Account Holder: " << accountHolder << ", Account Number: " << accountNumber << ", Balance: $" << balance << " (Default Balance)\n";
    }

    // Method to display account details
    void display() const {
        cout << "Account Holder: " << accountHolder << ", Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }

    // 5. Destructor
    ~BankAccount() {
        cout << "Destructor called for Account Holder: " << accountHolder << ", Account Number: " << accountNumber << endl;
    }
};

int main() {
    cout << "Creating account1 using Default Constructor:\n";
    BankAccount account1; // Default constructor

    cout << "\nCreating account2 using Parameterized Constructor:\n";
    BankAccount account2("John Doe", 123456, 500.0); // Parameterized constructor

    cout << "\nCreating account3 using Copy Constructor from account2:\n";
    BankAccount account3 = account2; // Copy constructor

    cout << "\nCreating account4 using Constructor with Default Argument:\n";
    BankAccount account4("Jane Doe", 654321); // Constructor with default argument

    cout << "\nDisplaying account details:\n";
    account1.display();
    account2.display();
    account3.display();
    account4.display();

    cout << "\nExiting main...\n";
    return 0;
}
