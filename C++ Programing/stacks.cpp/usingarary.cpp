#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;          // Array to store stack elements
    int topIndex;      // Index of the top element
    int capacity;      // Maximum capacity of the stack

public:
    // Constructor to initialize stack with a given size
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        topIndex = -1; // Initially, the stack is empty
    }

    // Destructor to free dynamically allocated memory
    ~Stack() {
        delete[] arr;
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack is full! Cannot push " << value << endl;
        } else {
            arr[++topIndex] = value;
            cout << value << " pushed to stack." << endl;
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty! Cannot pop." << endl;
        } else {
            cout << arr[topIndex--] << " popped from stack." << endl; 
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return topIndex == -1;
    }

    // Function to check if the stack is full
    bool isFull() {
        return topIndex == capacity - 1;
    }

    // Function to get the current size of the stack
    int size() {
        return topIndex + 1;
    }

    // Function to get the top element of the stack
    int top() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1; // Return -1 if the stack is empty
        }
        return arr[topIndex];
    }
};

int main() {
    int size, choice, value;

    // Ask for the size of the stack
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack stack(size);

    do {
        cout << "\nMenu: \n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Check if stack is empty\n";
        cout << "4. Check if stack is full\n";
        cout << "5. Size of stack\n";
        cout << "6. Top element of stack\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                if (stack.isEmpty()) {
                    cout << "Stack is empty.\n";
                } else {
                    cout << "Stack is not empty.\n";
                }
                break;
            case 4:
                if (stack.isFull()) {
                    cout << "Stack is full.\n";
                } else {
                    cout << "Stack is not full.\n";
                }
                break;
            case 5:
                cout << "Size of stack: " << stack.size() << endl;
                break;
            case 6:
                cout << "Top element: " << stack.top() << endl;
                break;
            case 7:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
