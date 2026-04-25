#include <iostream>
using namespace std;

class Queue {
private:
    int frontIndex, rearIndex;
    int size;
    int* arr;

public:
    // Constructor
    Queue(int capacity) {
        size = capacity;
        arr = new int[size];
        frontIndex = -1;
        rearIndex = -1;
    }

    // Destructor
    ~Queue() {
        delete[] arr;
    }

    // Check if queue is empty
    bool isEmpty() {
        return frontIndex == -1 || frontIndex > rearIndex;
    }

    // Check if queue is full
    bool isFull() {
        return rearIndex == size - 1;
    }

    // Enqueue operation
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (isEmpty()) {
            frontIndex = 0;
        }
        rearIndex++;
        arr[rearIndex] = value;
        cout << value << " enqueued to queue." << endl;
    }

    // Dequeue operation
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << arr[frontIndex] << " dequeued from queue." << endl;
        frontIndex++;
    }

    // Peek at front element
    int front() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[frontIndex];
    }

    // Display the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = frontIndex; i <= rearIndex; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Test the Queue
int main() {
    Queue q(5);  // Create a queue of size 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    cout << "Front element: " << q.front() << endl;

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);  // Should be full now

    q.display();

    return 0;
}
