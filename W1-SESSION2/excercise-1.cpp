#include <iostream>
using namespace std;

/**
 * Return whether the given number if inside the given range
 * @param number : the number
 * @param min : the range min
 * @param max : the range max
 * @return true if inside the range, false otherwise
 */
bool isInside(int number, int min, int max) {
    // TODO
    if (number < min || number > max) return false;
    return true;
}

int main() {
 
    // 1-  Input the number
    // TODO
    int number;
    cout << "Enter the number: ";
    cin >> number;
    // 2 - Input the range
    int min;
    int max;

    // BONUS : If the user accidentally enters a minimum value that is larger
    // than the maximum value, ask them to enter the values again.
    // TODO
    do {
        cout << "Enter the minimum number: ";
        cin >> min;
        cout << "Enter the maximum number: ";
        cin >> max;

        if(min > max) {
            char check;
            cout << "You should input minimum number smaller than maximum number" << endl;
            cout << "Do you want to input again (Y/N): ";
            cin >> check;
            if (check == 'N' || check == 'n') {
                exit(8);
            }
        }
    } while(min > max);
    // 3-  Check if the number is inside the range
    // TODO
    if (isInside(number, min, max)) {
        cout << "inside" << endl;
    } else {
        cout << "outside" << endl;
    }
    return 0;
}