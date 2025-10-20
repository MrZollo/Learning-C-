#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    float quantity, price, total_price = 0, amount, paid, amountreceive;
    string meal, yesNo, name_card, payment, card_number;

    do
    {
        // Show menu every time
        cout << "\n========== MENU ==========" << endl;
        cout << "1. Burger,  RM 5.99" << endl;
        cout << "2. Pizza,   RM 7.99" << endl;
        cout << "3. Salad,   RM 4.99" << endl;
        cout << "4. Soda,    RM 1.99" << endl;
        cout << "==========================" << endl;
        
        cout << "\nWhat do you want to order: ";
        cin >> meal;
        
        // Set price based on selection
        if (meal == "1" || meal == "Burger" || meal == "burger") {
            price = 5.99;
        } else if (meal == "2" || meal == "Pizza" || meal == "pizza") {
            price = 7.99;
        } else if (meal == "3" || meal == "Salad" || meal == "salad") {
            price = 4.99;
        } else if (meal == "4" || meal == "Soda" || meal == "soda") {
            price = 1.99;
        } else {
            cout << "Invalid selection! Please try again." << endl;
            continue;
        }
        
        cout << "How many quantity: ";
        cin >> quantity;
        
        if (quantity <= 0) {
            cout << "Invalid quantity! Please try again." << endl;
            continue;
        }
        
        amount = price * quantity;
        total_price = total_price + amount;
        
        cout << fixed << setprecision(2);
        cout << "Amount for this item: RM " << amount << endl;
        cout << "Running total: RM " << total_price << endl;
        
        cout << "\nDo you want to add another order? (yes/no): ";
        cin >> yesNo;
        
    } while (yesNo == "yes" || yesNo == "Yes" || yesNo == "YES");
    
    cout << "\nChecking out..." << endl;
    cout << "Your total price: RM " << total_price << endl;
    
    cout << "\nDo you want to pay with card or cash? ";
    cin >> payment;
    
    if (payment == "card")
    {
        cout << "Name on card: ";
        cin.ignore(); // Clear input buffer
        getline(cin, name_card);
        
        cout << "Card number: ";
        cin >> card_number;
        
        cout << "\nYour order has been placed!" << endl;
        cout << "Payment accepted." << endl;
    }
    else if (payment == "cash")
    {
        cout << "Amount received: RM ";
        cin >> amountreceive;
        
        if (amountreceive >= total_price) {
            paid = amountreceive - total_price;
            cout << "Payment accepted." << endl;
            cout << "Your change: RM " << paid << endl;
        } else {
            cout << "Insufficient payment! Transaction cancelled." << endl;
            return 1;
        }
    }
    else
    {
        cout << "Invalid payment method!" << endl;
        return 1;
    }
    
    cout << "\nThank you for your order!" << endl;
    
    return 0;
}