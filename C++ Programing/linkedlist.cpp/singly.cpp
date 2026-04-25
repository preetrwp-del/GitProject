#include <iostream>
using namespace std;

// Define the node structure
struct Node {
    int data;
    Node* next;
};

// Function to create a linked list
void createList(Node*& head) {
    head = nullptr;  // Initialize an empty list
    cout << "Linked list created successfully.\n";
}

// Function to insert a node at the beginning
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    cout << "Inserted " << value << " at the beginning.\n";
}

// Function to insert a node at the end
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    // If the list is empty, make the new node the head
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        // Traverse to the last node
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    cout << "Inserted " << value << " at the end.\n";
}

// Function to delete a node from the beginning
void deleteFromBeginning(Node*& head) {
    if (head == nullptr) {
        cout << "The list is empty, no element to delete.\n";
        return;
    }

    Node* temp = head;
    head = head->next;  // Move the head to the next node
    delete temp;  // Delete the old head
    cout << "Node deleted from the beginning.\n";
}

// Function to delete a node from the end
void deleteFromEnd(Node*& head) {
    if (head == nullptr) {
        cout << "The list is empty, no element to delete.\n";
        return;
    }

    if (head->next == nullptr) {  // Only one node in the list
        delete head;
        head = nullptr;
        cout << "Node deleted from the end.\n";
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->next != nullptr) {
        temp = temp->next;
    }

    // Now temp is the second-last node
    delete temp->next;  // Delete the last node
    temp->next = nullptr;  // Set the next pointer of second-last node to nullptr
    cout << "Node deleted from the end.\n";
}

// Function to traverse and print the list
void traverseList(Node* head) {
    if (head == nullptr) {
        cout << "The list is empty.\n";
        return;
    }

    Node* temp = head;
    cout << "Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;  // Initialize the list

    int choice, value;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Create a new linked list\n";
        cout << "2. Insert at the beginning\n";
        cout << "3. Insert at the end\n";
        cout << "4. Delete from the beginning\n";
        cout << "5. Delete from the end\n";
        cout << "6. Traverse the linked list\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createList(head);
                break;
            case 2:
                cout << "Enter value to insert at the beginning: ";
                cin >> value;
                insertAtBeginning(head, value);
                break;
            case 3:
                cout << "Enter value to insert at the end: ";
                cin >> value;
                insertAtEnd(head, value);
                break;
            case 4:
                deleteFromBeginning(head);
                break;
            case 5:
                deleteFromEnd(head);
                break;
            case 6:
                traverseList(head);
                break;
            case 7:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
