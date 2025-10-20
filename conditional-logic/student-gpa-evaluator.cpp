#include <iostream>
using namespace std;

int main() {
    double GPA;
    cout << "Enter GPA: ";
    cin >> GPA;

    // Check for invalid GPA first
    if (GPA > 4.00 || GPA < 0.00) {
        cout << "INVALID!, Must be between 0.00 and 4.00" << endl;
    } 
    else if (GPA >= 3.50) {
        cout << "Dean List" << endl;
    } 
    else if (GPA >= 2.00) {
        cout << "Pass" << endl;
    } 
    else if (GPA >= 1.80) {
        cout << "Conditional Pass" << endl;
    } 
    else {
        cout << "Fail" << endl;
    }

    return 0;
}