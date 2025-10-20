#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = nullptr;
    int input, value;
    
    do {
        // Create new node
        Node* newNode = new Node;
        cout << "Masukkan data : ";
        cin >> value;
        newNode->data = value;
        newNode->next = nullptr;
        
        // Insert at beginning of list
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        
        // Print the entire list
        cout << "Linked List: ";
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
        
        // Ask to continue
        cout << "Masukkan data lagi? (1 for yes, 0 for no) : ";
        cin >> input;
        
    } while (input == 1);
    
    // Clean up memory (important!)
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    
    return 0;
}