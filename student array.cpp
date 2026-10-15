#include <iostream>
using namespace std;

const int TOTAL_STUDENTS = 50;   

int main() {
    int attendance[TOTAL_STUDENTS]; 
    int presentCount = 0;           
    cout << "Enter 1 for Present or 0 for Absent, for each student." << endl << endl;
    for (int i = 0; i < TOTAL_STUDENTS; i++) {
        int input;

        do {
            cout << "Student ID " << (i + 1) << ": ";
            cin >> input;

            if (input != 0 && input != 1) {
                cout << "Invalid entry.1 for (present) or 0 for (absent)" << endl;
            }
        } while (input != 0 && input != 1);

        attendance[i] = input;  
    }
    cout << endl << "--- Absent Students ---" << endl;
    bool absentFound = false; 

    for (int i = 0; i < TOTAL_STUDENTS; i++) {
        if (attendance[i] == 0) {         
            cout <<  (i + 1) << ":" << attendance[i]<< endl;
            absentFound = true;
        }
    }

    if (!absentFound) {
        cout << "None. All students were present today." << endl;
    }


    for (int i = 0; i < TOTAL_STUDENTS; i++) {
        if (attendance[i] == 1) {         
            presentCount++;                 
        }
    }

    cout << "Total students present: " << presentCount << " out of " << TOTAL_STUDENTS << endl;
    cout << "Total students absent : " << (TOTAL_STUDENTS - presentCount) << " out of " << TOTAL_STUDENTS << endl;

    return 0;
}