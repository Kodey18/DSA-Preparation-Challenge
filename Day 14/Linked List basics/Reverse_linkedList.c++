#include<iostream>
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

void reverseList(Node* &head){
    Node* prev = NULL; 
    Node* curr = head;
    if(head == NULL || head->next == NULL){ 
        return;
    }   //if there is only one element left or no elements at all.

    while(curr != NULL){
        head = head->next;
        curr->next = prev;
        prev = curr;
        curr = head;
    }
    head = prev;
}

/*
printing using operator overload. "cout<<head" will call the operator overload function. in which cout is one input and head is another therefore the arguments passed in operator<< functions are ostream &out, Node* head.
*/
ostream& operator<<(ostream &out, Node* head){
    //printing logic below.
    for(Node* temp = head; temp != NULL; temp = temp->next){
        cout<<temp->data<<" ";
    }

    /*
        here by returning object of the type ostream basically "cout" will allow to perform the cascading of the overloaded operator.
        eg : cout<<head1<<head2;
    */
    return out;
}

int main(){
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
    cout<<head;

    cout<<"here\n";
    reverseList(head);      //reversing the created linked list.

    // printList(head);
    cout<<head;

    return 0;
}