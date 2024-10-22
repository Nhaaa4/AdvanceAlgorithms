#include <iostream>
#include <string>
using namespace std;
#define DECIMAL_DIGIT 2
class BankAccount {
// TODO
private: 
    string accountNumber;
    string accountHolder;
    float balance;
public:
    BankAccount() {
        this->accountNumber = "NULL";
        this->accountHolder = "NULL";
        this->balance = 0.00;
    }
    BankAccount(string accountNumber, string accountHolder, float balance) {
        this->accountNumber = accountNumber;
        this->accountHolder = accountHolder;
        this->balance = balance;
    }

    void setAccountNumber(string accountNumber) {
        this->accountNumber = accountNumber;
    }
    void setAccountHolder(string accountHolder) {
        this->accountHolder = accountHolder;
    }
    void setBalance(float balance) {
        if (balance >= 0) {
            this->balance = balance;
        } else {
            cout << "Invalid value" << endl;
        }
    }

    string getAccountNumber() {
        return this->accountNumber;
    }
    string getAccountHolder() {
        return this->accountHolder;
    }
    float getBalance() {
        return this->balance;
    }

    void deposit(float amount) {
        if (amount >= 0) { 
            this->balance += amount; 
        } else { 
            cout << "Invalid value" << endl; 
        }
    }
    bool withdraw(float amount) {
        if (amount <= balance) {
            this->balance -= amount;
            return true;
        } else {
            cout << "Fail! becasue there are not enough funds." << endl;
        }
    } 
    string toString() {
        return "Number: " + this->accountNumber + ", Holder: " + this->accountHolder + ", Balance: " + to_string(this->balance);
    }
};

int main() {

    // Create an account with 0$
    BankAccount myAccount("ABC", "ronan", 0);
    cout<< myAccount.toString() << endl;

    // Deposite 100$
    myAccount.deposit(100);
    cout<< myAccount.toString() << endl;

    // Withdraw 80$ - Should success
    myAccount.withdraw(80);
    cout<< myAccount.toString() << endl;

    // Withdraw 30$ - Should fail
    myAccount.withdraw(30);
    cout<< myAccount.toString() << endl;

    return 0;
}