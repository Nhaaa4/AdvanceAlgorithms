#include <iostream>
#include <vector>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void selectionSort(std::vector<int>& arr) {
    //your code here
    //validate the array is sorted or not
}

void printArray(std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {64, 25, 12, 22, 11};
    std::cout << "Original array: ";
    printArray(arr);

    selectionSort(arr);

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}