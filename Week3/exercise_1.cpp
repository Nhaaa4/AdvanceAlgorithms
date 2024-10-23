#include <iostream>
#include <vector>

bool isSorted(std::vector<int>& array) {
    //your code here
}

int main() {
    std::vector<int> test1 = {1, 2, 8, 10, 49};
    std::vector<int> test2 = {1, 2, 8, 6, 49};
    std::vector<int> test3 = {3, 3, 3, 3};
    std::vector<int> test4 = {};

    std::cout << std::boolalpha; // Print bools as true/false
    std::cout << "Test 1: " << isSorted(test1) << std::endl;
    std::cout << "Test 2: " << isSorted(test2) << std::endl;
    std::cout << "Test 3: " << isSorted(test3) << std::endl;
    std::cout << "Test 4: " << isSorted(test4) << std::endl;

    return 0;
}