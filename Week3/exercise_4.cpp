#include <iostream>
#include <vector>


bool isSorted(std::vector<int>& array) {
    // your code from exercise 1
}

void insertionSort(std::vector<int>& arr) {
    //your code here
    //validate the array is sorted or not
}

void printArray(std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6};
    insertionSort(arr);
    printArray(arr);
    return 0;
}