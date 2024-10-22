#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

#define DECIMAL_DIGIT 2

struct Student {
    int id;
    std::string name;
    std::vector<int> scores;
};

std::vector<Student> students  = {
    {1, "Alice", {85, 92, 78, 94, 88}},
    {2, "Bob", {76, 81, 72, 85, 79}},
    {3, "Charlie", {93, 89, 84, 91, 95}},
    {4, "David", {65, 70, 75, 60, 80}},
    {5, "Eve", {54, 68, 72, 77, 65}}
};

/**
 * Calculate the average score of the given student
 * @param Student : the student
 * @return the average of students scores
 */
float calculateAverage(Student student) {
    // TODO
    float total;
    for (int i = 0; i < student.scores.size(); i++) {
        total += student.scores[i];
    }
    return total / student.scores.size();    // To change
}

/**
 * Calculate GPA based on average score
 * @param Student : the student
 * @return the average of students scores
 */
float calculateGPA(Student student) {
    // TODO
    if (calculateAverage(student) >= 90 && calculateAverage(student) <= 100) {
        return 4.0f;
    } else if (calculateAverage(student) >= 80 && calculateAverage(student) < 90) {
        return 3.0f;
    } else if (calculateAverage(student) >= 70 && calculateAverage(student) < 80) {
        return 2.0f;
    } else if (calculateAverage(student) >= 60 && calculateAverage(student) < 70) {
        return 1.0f;
    } else if (calculateAverage(student) >= 0 && calculateAverage(student) < 60) {
        return 0.0f;
    }
    return -1.0f;    // To change
}


/**
 * Calculate letter grade based on GPA
 * @param Student : the student
 * @return the average of students scores
 */
std::string calculatGrade(Student student) {
    // TODO
    if (calculateGPA(student) > 3 && calculateGPA(student) <= 4) {
        return "A";
    } else if (calculateGPA(student) > 2 && calculateGPA(student) <= 3) {
        return "B";
    } else if (calculateGPA(student) > 1 && calculateGPA(student) <= 2) {
        return "C";
    } else if (calculateGPA(student) > 0 && calculateGPA(student) <= 1) {
        return "D";
    } else if (calculateGPA(student) == 0) {
        return "E";
    }
    return "Invalid value"; // To change
}


/**
 * Compute and print students statistic (average, GPA, grade letter) on console
 * @param Student : the student
 */
void printStudentStatistics(const Student& student) {
        float average = calculateAverage(student);
        float gpa = calculateGPA(student);
        std::string grade = calculatGrade(student);

        std::cout << "| " << std::setw(10) << student.id << " | "
                  << std::setw(10) << student.name << " | "
                  << std::setw(14) << average << " | "
                  << std::setw(4) << gpa << " | "
                  << std::setw(5) << grade << " |\n";
}


int main() {
    std::cout << std::fixed << std::setprecision(DECIMAL_DIGIT); // Set decimal precision for average and GPA
    std::cout << "------------------------------------------------------------\n";
    std::cout << "| Student ID | Name      | Average Score |  GPA | Grade |\n";
    std::cout << "------------------------------------------------------------\n";
    // Call the function printStudentStatistics for each student
    // TODO
    for (int i = 0; i < students.size(); i++) {
        printStudentStatistics(students[i]);
    }
 
    std::cout << "------------------------------------------------------------\n";
    
    return 0;
}