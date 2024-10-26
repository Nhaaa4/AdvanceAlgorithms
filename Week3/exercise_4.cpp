#include <iostream>
#include <vector>


bool isSorted(std::vector<int>& array) {
    // your code from exercise 1
    for (int i = 1; i < array.size(); i++) {
        if (array[i - 1] > array[i]) {
            return false;
        }
    }
    return true;
}

void insertionSort(std::vector<int>& arr) {
    //your code here
    //validate the array is sorted or not
    if (isSorted(arr)) {
        std::cout << "Your array is sorted" << std::endl;
    } else {
        for (int i = 1; i < arr.size() - 1; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
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