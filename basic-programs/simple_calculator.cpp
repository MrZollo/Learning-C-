#include <iostream>
using namespace std;

int main() {

    char simbol;
    int a, b, answer;

    cout << "Enter Symbol = ";
    cin >> simbol;

    cout << "Enter Value 1 = ";
    cin >> a;

    cout << "Enter Value 2 = ";
    cin >> b;

    switch (simbol) {
        case '+':
            answer = a + b;
            cout << a << " + " << b << " is " << answer;
            break;

        case '-':
            answer = a - b;
            cout << a << " - " << b << " is " << answer;
            break;

        case '*':
            answer = a * b;
            cout << a << " * " << b << " is " << answer;
            break;

        case '/':
            answer = a / b;
            cout << a << " / " << b << " is " << answer;
            break;

        default:
            cout << "Sorry, you entered an invalid operator.\n";
            break;
    }

    return 0;
}
