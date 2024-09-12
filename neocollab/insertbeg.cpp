#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the beginning of the list
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    cout << "Node inserted" << endl;
}

// Function to display the linked list
void displayList(Node* head) {
    cout << "Linked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;  // Initialize an empty linked list
    int n, choice;

    do {
        // Input the integer to insert at the beginning
        cin >> n;
        insertAtBeginning(head, n);

        // Input choice to continue or stop
        cin >> choice;
    } while (choice == 0);

    // Display the final linked list
    displayList(head);
    cout << "Node ended" << endl;

    return 0;
}
