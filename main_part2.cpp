#include “student.h”
#include “examination.h”
#include <iostream>

void main() {
    Examination* examination;
    Student* tempStudent;
    int row, col, rowNum, columnNum;
    char studentInfo[30];
    // Ask a user to enter a number of rows for a examination seating
    cout << "Please enter a number of rows for a examination seating.";
    cin >> rowNum;

    // Ask a user to enter a number of columns for a examination seating
    cout << "Please enter a number of columns for a examination seating.";
    cin >> columnNum;
    // examination_seating
    examination = new Examination(rowNum, columnNum);
    cout << "Please enter a student information or enter \"Q\" to quit.";
    /*** reading a student's information ***/
    cin >> studentInfo;
    /* we will read line by line **/
    while (1 /* change this condition*/) {
        cout << "\nA student information is read.";
        // printing information.
        cout << studentInfo;
        // student
        tempStudent = new Student(studentInfo);
        // Ask a user to decide where to seat a student by asking
        // for row and column of a seat
        cout << "Please enter a row number where the student wants to sit.";
        cin >> row;
        cout << "Please enter a column number where the student wants to sit.";
        cin >> col;
        // Checking if the row number and column number are valid
        // (exist in the examination that we created.)
        if (*examination.checkBoundaries(row, col) == false) {
            cout << "\nrow or column number is not valid.";
            cout << "A student” << (*tempStudent).getFirstName() << “ “ <<
                    (*tempStudent).getLastName() << “ is not assigned a seat.";
        } else {
            // Assigning a seat for a student
            if ((*examination).assignStudentAt(row, col, tempStudent) == true) {
                cout << "\nThe seat at row “<< row << “ and column “ <<
                        “ is assigned to the student, ” << (*tempStudent).toString();
                (*examination).toString();
                cout << (*examination).toString();
            } else {
                cout << "\nThe seat at row “ << row << “ and column “ << col << “ is taken.";
            }
        }
        // Read the next studentInfo
        cout << "Please enter a student information or enter \"Q\" to quit.";
        /*** reading a student's information ***/
        cin >>studentInfo;
    }
}
