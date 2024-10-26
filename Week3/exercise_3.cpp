#include <iostream>
#include <vector>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

bool isSorted(std::vector<int>& array) {
    // your code from exercise 1
    for (int i = 1; i < array.size(); i++) {
        if (array[i - 1] > array[i]) {
            return false;
        }
    }
    return true;
}

void selectionSort(std::vector<int>& arr) {
    //your code here
    //validate the array is sorted or not
    if (isSorted(arr)) {
        std::cout << "Your array is sorted" << std::endl;
    } else {
        for (int i = 0; i < arr.size() - 1; i++) {
            int minIndex = i;
            int minValue = arr[i];
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[j] < minValue) {
                    minIndex = j;
                    minValue = arr[j];
                }
            }
            arr[minIndex] = arr[i];
            arr[i] = minValue;
        }
    }
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