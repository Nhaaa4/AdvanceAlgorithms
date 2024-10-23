#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define DECIMAL_DIGIT 2

struct Student {
    int id;
    string name;
    int* scores;
    int numScores;
};

float calculateAverage(Student students) {
    float totalScores = 0;
    for (int i = 0; i < students.numScores; i++) {
        totalScores += students.scores[i];
    }
    return totalScores / students.numScores;
}

int main() {
    // Step 1: Prompt user for the number of Students
    int n;
    do {
        cout << "Enter the number of Students: ";
        cin >> n;
    } while(n < 1);

    // Step 2: Dynamically allocate an array of Students
    Student* students = new Student[n];

    // Step 3: Populate the student array with values
    for (int i = 0; i < n; i++) {
        cout << "----------->> Student " << i + 1 << " <<-----------" << endl;
        cout << "Enter ID: #";
        cin >> students[i].id;
        cout << "Enter Name: ";
        cin >> students[i].name;
        do {
            cout << "Enter the number of Scores: ";
            cin >> students[i].numScores;
        } while (students[i].numScores <= 0);

        students[i].scores = new int[students[i].numScores];

        for (int j = 0; j < students[i].numScores; j++) {
            cout << "Enter Score " << j + 1 << " : ";
            cin >> students[i].scores[j];
        }
    }
    cout << endl;

    // Step 4: Display the ID, Name average score of each student
    cout << fixed << setprecision(DECIMAL_DIGIT); 
    cout << "------------------------------------------" << endl;
    cout << "| Student ID | Name      | Average Score |" << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << "| " << setw(10) << students[i].id << " | "
                  << setw(9) << students[i].name << " | " 
                  << setw(13) << calculateAverage(students[i]) << " |" << endl;
    }
    cout << "------------------------------------------" << endl;

    // Step 5: Free the allocated memory
    for (int i = 0; i < n; i++) {
        delete[] students[i].scores;
        students[i].scores = nullptr;
    }

    delete[] students;
    students = nullptr;

    return 0;
}