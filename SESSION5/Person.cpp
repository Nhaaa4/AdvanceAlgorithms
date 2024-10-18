#include <iostream>
#include <string>
using namespace std;

class Person {
// Write you code here
private:
    string lastName;
    string firstName;
    int securityNumber;
public:
    Person() {
        this->lastName = "NULL";
        this->firstName = "NULL";
        this->securityNumber = 0;
    }
    Person(string lastName, string firstName, int securityNumber) {
        this->lastName = lastName;
        this->firstName = firstName;
        this->securityNumber = securityNumber;
    }
    
    void setLastName(string lastName) {
        this->lastName = lastName;
    }
    void setFirstName(string firstName) {
        this->firstName = firstName;
    }
    void setSecurityNumber(int securityNumber) {
        this->securityNumber = securityNumber;
    }

    string getLastName() {
        return this->lastName;
    }
    string getFirstName() {
        return this->firstName;
    }
    int getSecurityNumber() {
        return this->securityNumber;
    }
    string toString() {
        return "First Name: " + this->firstName + ", Last Name: " + this->lastName + ", Security Number: " + to_string(this->securityNumber);
    }
};


int main() {
    Person ronan("ronan", "ogor", 4785);
    Person p2;
    cout << p2.toString() << endl;
    ronan.setFirstName("ronano");
    cout << ronan.toString() << endl;
    ronan.setLastName("ogorn");
    cout << ronan.getLastName() << endl;
    
    return 0;
}