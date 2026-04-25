#include <iostream>
#include<limits.h>
using namespace std;
class stack{
    private:
        int capacity;
        int* arr;
        int topIndex;
    
    public:
        stack(int size){
            capacity = size;
            arr = new int[capacity];
            topIndex = -1; 
        }

    void push(int data){
        if(topIndex == capacity-1){
            cout<<"OVERFLOW\n";
        }
        topIndex++;
        arr[topIndex] = data;
        cout << data << " pushed to stack." << endl;
    }
    
    int pop(){
        if(topIndex == -1){
            cout<<"UNDERFLOW\n";
        }
        topIndex--;
        cout << arr[topIndex--] << " popped from stack." << endl;
        
    }

    int getop(){
        if(topIndex == -1){
            cout<<"UNDERFLOW\n";
        }
        return arr[topIndex] ;
    }

    bool isEmpty(){
        return topIndex = -1;
    }

    bool isFull(){
        return topIndex = capacity-1;
    }

    int size(){
        return topIndex + 1;
    }
    
};
int main(){
    int size, choice, value;

    // Ask for the size of the stack
    cout << "Enter the size of the stack: ";
    cin >> size;

    stack st(size);

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
                st.push(value);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                if (st.isEmpty()) {
                    cout << "Stack is empty.\n";
                } 
                else {
                    cout << "Stack is not empty.\n";
                }
                break;
            case 4:
                if (st.isFull()) {
                    cout << "Stack is full.\n";
                } 
                else {
                    cout << "Stack is not full.\n";
                }
                break;
            case 5:
                cout << "Size of stack: " << st.size() << endl;
                break;
            case 6:
                cout << "Top element: " << st.getop() << endl;
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
    