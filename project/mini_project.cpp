
#include <iostream>
using namespace std;

// number of students
int valid() {
    int ch;

    cout << "ENTER NUMBER OF STUDENTS (1-100): ";
    cin >> ch;

    while (ch < 1 || ch > 100) {
        cout << "ENTER VALID NUMBER (1-100): ";
        cin >> ch;
    }

    return ch;
}

// Read marks
void read(int marks[], int ch) {
    for (int i = 0; i < ch; i++) {
        cout << "ENTER MARK OF STUDENT " << i + 1 << ": ";
        cin >> marks[i];
    }
}

// Calculate total
int totalMarks(int marks[], int ch) {
    int total = 0;

    for (int i = 0; i < ch; i++) {
        total += marks[i];
    }

    return total;
}

// Calculate average
double average(int total, int ch) {
    return (double)total / ch;
}

// Find highest mark
int highest(int marks[], int ch) {
    int high = marks[0];

    for (int i = 1; i < ch; i++) {
        if (marks[i] > high) {
            high = marks[i];
        }
    }

    return high;
}

// Find lowest mark
int lowest(int marks[], int ch) {
    int low = marks[0];

    for (int i = 1; i < ch; i++) {
        if (marks[i] < low) {
            low = marks[i];
        }
    }

    return low;
}

// Count pass and fail
void passFail(int marks[], int ch) {
    int pass = 0, fail = 0;

    for (int i = 0; i < ch; i++) {
        if (marks[i] >= 40) {
            pass++;
        }
        else {
            fail++;
        }
    }

    cout << "PASSED STUDENTS: " << pass << endl;
    cout << "FAILED STUDENTS: " << fail << endl;
}

// Main function
int main() {
    int n = 1;

    while (n == 1) {

        int ch = valid();
        int marks[100];

        read(marks, ch);

        int total = totalMarks(marks, ch);
        double avg = average(total, ch);

        cout << "\n----- STUDENT MARK ANALYSIS -----\n";

        cout << "TOTAL MARKS: " << total << endl;
        cout << "AVERAGE: " << avg << endl;
        cout << "HIGHEST MARK: " << highest(marks, ch) << endl;
        cout << "LOWEST MARK: " << lowest(marks, ch) << endl;

        passFail(marks, ch);

        cout << "\nPRESS 1 TO CONTINUE OR 0 TO EXIT: ";
        cin >> n;
    }

    return 0;
}
