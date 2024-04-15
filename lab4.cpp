#include <iostream> // This library allows input and output operations.
#include <string>   // This library allows working with strings (sequences of characters).

using namespace std;

int main() {
    // Define the number of students and grades
    int numStudents = 5; // This variable stores the number of students.
    int numGrades = 5;   // This variable stores the number of grades for each student.

    // Declare arrays to store student names and grades
    string studentNames[numStudents];             // This array stores the names of the students.
    double grades[numStudents][numGrades + 1];    // This 2D array stores the grades of the students.

    // Input student names and grades
    cout << "Enter names and grades for " << numStudents << " students:\n"; // Prompt the user to enter names and grades for 5 students.
    for (int i = 0; i < numStudents; ++i) { // This loop iterates over each student.
        cout << "Student " << i + 1 << ":\n"; // Prompt for information for each student.
        cout << "Name: ";                     // Ask for the name of the student.
        getline(cin >> ws, studentNames[i]);  // Read the name of the student.

        cout << "Grades (5 grades separated by space): "; // Ask for the grades for the student.
        double sum = 0;
        // Input grades for the student
        for (int j = 0; j < numGrades; ++j) { // This loop iterates over each grade for the current student.
            cin >> grades[i][j]; // Read each grade entered by the user and store it.
            sum += grades[i][j]; // Calculate the sum of the grades entered for the student.
        }
        // Calculate and store the average grade for the student
        grades[i][numGrades] = sum / numGrades; // Calculate the average grade for the student and store it.
    }

    // Output header
    cout << "\nStudent\t\tGrades\t\tAverage\n"; // Print a header for the table of student names, grades, and averages.

    // Output student names, grades, and average
    for (int i = 0; i < numStudents; ++i) { // This loop iterates over each student.
        cout << studentNames[i] << "\t\t"; // Print the name of each student.
        // Output each grade for the student
        for (int j = 0; j < numGrades; ++j) { // This loop iterates over each grade for the current student.
            cout << grades[i][j] << "\t\t"; // Print each grade for the student.
        }
        // Output average grade for the student
        cout << grades[i][numGrades] << endl; // Print the average grade for the student.
    }
}
