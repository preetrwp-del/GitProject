#include<iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        
        Node(int data){
            val=data;
            next=NULL;
        }

};

void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node -> next = head;
    head = new_node;
} 
 
void insertAtTail(Node* &head, int val){
    Node* new_node = new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
} 

void insertAtPostion(Node* &head, int val, int pos){
    if(pos==0){
        insertAtHead(head,val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp=head;
    int current_pos=0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}

void updateAtPosition(Node* &head, int val, int k){
    Node* temp=head;
    int current_pos=0;
    while(current_pos!=k){
        temp=temp->next;
        current_pos++;
    }
    temp->val=val;
}

void deleteAtHead(Node* &head){
    Node* temp=head;
    head=head->next;
    free(temp);
}

void deleteAtTail(Node* &head){
    Node* second_last = head;
    while(second_last->next->next!=NULL){
        second_last = second_last->next;
    }
    Node* temp= second_last->next;
    second_last->next=NULL;
    free(temp);
}

void deleteAtPosition(Node* &head, int pos){
    if(pos==0){
        deleteAtHead(head);
        return;
    }
    int current_position=0;
    Node* prev = head;
    while(current_position!=pos-1){
        prev=prev->next;
        current_position++;
    }
    Node* temp= prev->next;
    prev->next=prev->next->next;
    free(temp);

}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head=NULL;
    int choice, value;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert at the head\n";
        cout << "2. Insert at the tail\n";
        cout << "3. Insert at the given position\n";
        cout << "4. Delete from the head\n";
        cout << "5. Delete from the tail\n";
        cout << "6. Delete from the given position\n";
        cout << "7. update at the given postion\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at the head: ";
                cin >> value;
                insertAtHead(head,value);
                display(head);
                break;
            case 2:
                cout << "Enter value to insert at the tail: ";
                cin >> value;
                insertAtTail(head, value);
                display(head);
                break;
            case 3:
                int pos;
                cout << "Enter position to insert at the end: ";
                cin >> pos;
                cout << "Enter value to insert at the end: ";
                cin >> value;
                insertAtPostion(head, value, pos);
                display(head);
                break;
            case 4:
                deleteAtHead(head);
                display(head);
                break;
            case 5:
                deleteAtTail(head);
                display(head);
                break;
            case 6:
                int post;
                cout << "Enter position to delete the element: ";
                cin >> post;
                deleteAtPosition(head,post);
                display(head);
                break;
            case 7:
                int posi;
                cout << "Enter position to update the element ";
                cin >> posi;
                cout << "Enter value to be replaced : ";
                cin >> value;
                updateAtPosition(head,value,posi);
                display(head);
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}