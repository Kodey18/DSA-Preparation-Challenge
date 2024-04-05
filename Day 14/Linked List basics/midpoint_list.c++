#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;  //pointer to the next node in the list

        Node(int d){
            data = d;
            next = NULL;
        }
};

void insertAtEnd(Node* &head, int data){
    if(head == NULL){
        head = new Node(data);
    } else {
        Node* temp = head;
        for(; temp->next != NULL; temp = temp->next){}
        temp->next = new Node(data);
    }
}

Node* midpoint(Node* head){
    Node *slow_ptr = head;
    Node *fast_ptr = head;
    
    while(fast_ptr && fast_ptr->next){
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    }

    return slow_ptr;
}

void printList(Node* head){
    Node* temp = head;
    for(; temp != NULL; temp = temp->next){
        cout<<temp->data<<" ";
    }
}

int main() {
    Node* head = NULL;   //creating a new linked list with one element.

    while(1){
        cout<<"Enter data (to stop enter -1) : ";
        int data;
        cin>>data;
        if(data == -1){
            break;
        } else {
            insertAtEnd(head, data);  //inserting the entered value at end of the list.
        }
    }

    cout<<"the iddle point of list is : "<<midpoint(head)->data<<"\n";
    
    return 0;
}