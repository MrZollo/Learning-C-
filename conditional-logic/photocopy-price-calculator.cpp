#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int sheet_number;
    double price;
    
    cout << "Enter number of photostat sheets: ";
    cin >> sheet_number;

    // Check for invalid input first
    if (sheet_number <= 0) {
        cout << "Invalid number of sheets!" << endl;
        return 1;
    }

    // Corrected logic with proper conditions
    if (sheet_number >= 1 && sheet_number <= 49) {
        price = sheet_number * 0.10;
    } 
    else if (sheet_number >= 50 && sheet_number <= 100) {
        price = sheet_number * 0.08;
    } 
    else if (sheet_number >= 101 && sheet_number <= 250) {
        price = sheet_number * 0.06;
    } 
    else {
        price = sheet_number * 0.04;
    }
    
    cout << fixed << setprecision(2);
    cout << "Price = RM " << price;

    return 0;
}