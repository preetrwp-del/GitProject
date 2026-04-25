#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, nullptr}}}};

    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;

    cout << "Reversed List: ";
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}
