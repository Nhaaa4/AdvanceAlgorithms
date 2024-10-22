#include <iostream>
using namespace std;


// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

/**
 * Validate a given date
 * @param year, month, day : the date
 * @return true if the date is valid, false otherwise
 */
bool isValidDate(int year, int month, int day) {
    // TODO
    // The year shall be a positive number
    // The month shall be a number between 1 and 12
    // The day shall be a number between 1 and the max days
    int day_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year <= 0 || month <= 0 || day <= 0) {
        return false;
    }
    if (month > 12) {
        return false;
    }
    if (isLeapYear(year)) {
        day_in_month[1] = 29;
        if (day > day_in_month[month - 1]) {
            return false;
        }
    } else {
        if (day > day_in_month[month - 1]) {
            return false;
        }
    }
    return true;
}

/**
 * Compare 2 dates (date1 and date2)
 * @param year1, month1, day1 : date 1
 * @param year2, month2, day2 : date 2
 * @return
 *      -1 if date1 < date2
 *      0 if they are the same
 *      1 if date1 > date2
 */
int compare(int year1, int month1, int day1, int year2, int month2, int day2) {
    // TODO
    if ( year1 == year2) {
        if (month1 == month2) {
            if (day1 > day2) {
                return 1;
            } else if (day1 < day2) {
                return -1;
            }
        } else if (month1 > month2) {
            return 1;
        } else {
            return -1;
        }
    } else if (year1 > year2) {
        return 1;
    } else {
        return -1;
    }
    
    return 0;
}

int main() {
    // 1- Input the dates
    int year1, month1, day1;
    cout << "Enter the first person's date of birth (year/month/day): ";
    cin >> year1 >> month1 >> day1;

    int year2, month2, day2;
    cout << "Enter the second person's date of birth (year/month/day): ";
    cin >> year2 >> month2 >> day2;

    // 2- Validate the dates (BONUS)
    // TODO
    if (!isValidDate(year1, month1, day1) || !isValidDate(year2, month2, day2)) {
        cout << "Invalid Dates!" << endl;
        exit(8);
    }
    // 3- Compare the dates
    // TODO
    if (compare(year1, month1, day1, year2, month2, day2) == 1) {
        cout << "The first person is the youngest." << endl;
    } else if (compare(year1, month1, day1, year2, month2, day2) == -1) {
        cout << "The second person is the youngest." << endl;
    } else {
        cout << "Both people have the same age." << endl;
    }
    return 0;
}
