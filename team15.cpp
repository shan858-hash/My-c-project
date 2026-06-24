#include <iostream>
using namespace std;

// Global Variables
string name;
string regNo, course, semester;
int totalLectures = 0, attendedLectures = 0;
int mark1 = 0, mark2 = 0, mark3 = 0;
float attendancePercentage = 0;
float average = 0;
bool eligible = false;

// Function Declarations
void addStudent();
void recordAttendance();
void recordMarks();
void calculateResults();
void displayReport();

int main() {
    int choice;

    do {
        cout << "\n===== Academic Performance & Eligibility Tracker =====\n";
        cout << "1. Add Student Details\n";
        cout << "2. Record Attendance\n";
        cout << "3. Record Marks\n";
        cout << "4. View Report\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();   // buffer clear karanawa getline ekata passe

        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                recordAttendance();
                break;
            case 3:
                recordMarks();
                break;
            case 4:
                calculateResults();
                displayReport();
                break;
            case 5:
                cout << "Exiting Program...\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}

// Only Name = getline
void addStudent() {
    cout << "\nEnter Full Student Name: ";
    getline(cin, name);   // full name support

    cout << "Enter Registration Number: ";
    getline(cin, regNo);

    cout << "Enter Course Name: ";
    getline(cin, course);

    cout << "Enter Semester: ";
    getline(cin, semester);
}

// Attendance
void recordAttendance() {
    cout << "\nEnter Total Lectures: ";
    cin >> totalLectures;

    cout << "Enter Attended Lectures: ";
    cin >> attendedLectures;

    if(totalLectures > 0)
        attendancePercentage = (attendedLectures * 100.0) / totalLectures;
    else
        attendancePercentage = 0;
}

// Marks
void recordMarks() {
    cout << "\nEnter Marks for Subject 1: ";
    cin >> mark1;

    cout << "Enter Marks for Subject 2: ";
    cin >> mark2;

    cout << "Enter Marks for Subject 3: ";
    cin >> mark3;
}

// Calculate
void calculateResults() {
    average = (mark1 + mark2 + mark3) / 3.0;

    if(attendancePercentage >= 80 && average >= 45)
        eligible = true;
    else
        eligible = false;
}

// Display
void displayReport() {
    cout << "\n===== Student Report =====\n";
    cout << "Name: " << name << endl;
    cout << "Registration No: " << regNo << endl;
    cout << "Course: " << course << endl;
    cout << "Semester: " << semester << endl;
    cout << "Attendance Percentage: " << attendancePercentage << "%" << endl;
    cout << "Average Marks: " << average << endl;

    if(eligible)
        cout << "Eligibility Status: Eligible\n";
    else
        cout << "Eligibility Status: Not Eligible\n";
        
}