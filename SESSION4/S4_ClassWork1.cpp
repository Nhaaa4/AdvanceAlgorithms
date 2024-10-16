#include <iostream>
#include <string>
using namespace std;
class Person {
 
public:
    std::string name;
    int age;
 
    Person(std::string name, int age) {
        this->name = name;
        this->age = age;
    }
  
    std::string toString() const {
        return "[Name= " + name + "] " + "[Age= " + to_string(age) + "]";
    }
};
 

int main() {
    Person person("Ronan", 18);
    std::cout << "Personn: " << person.toString() << std::endl;

    return 0;
}