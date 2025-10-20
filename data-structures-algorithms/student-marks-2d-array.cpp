#include <iostream>
using namespace std;

int main() {

    int mark[25][3];
    int i, j, max;

    // Question 1
    cout << "Enter quiz1, quiz2 and quiz3 for each student" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cin >> mark[i][j];
        }
    }

    // Question 2
    cout << "\nStudents marks:" << endl;
    for (i = 0; i < 2; i++) {
        cout << "Student " << i + 1 << " | ";
        for (j = 0; j < 3; j++) {
            cout << mark[i][j] << " ";
        }
        cout << "\n";
    }

    // Question 3
    for (i = 0; i < 2; i++) {
        max = mark[i][0];
        for (j = 1; j < 3; j++) {
            if (mark[i][j] > max) {
                max = mark[i][j];
            }
        }
        cout << "\nHighest mark for student " << i + 1 << " is: " << max << endl;
    }

    return 0;
}
