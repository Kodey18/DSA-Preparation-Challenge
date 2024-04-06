/*
Given two sorted linked lists , merge the two sorted linked lists into one sorted linked list .
*/

/*
Code to find the kth node from last.
*/

// approach : 1 as we move towards the tail reverse the list and as we reach tail find the kth node from head.

/*
beter approach : using the fast and slow pointer approach, move the fast pointer k steps ahead of the slow one then start moving both pointer 1 node each. fast pointer will have to move n-k node(totoal nodes=n, k nodes already travelled) so respectively the slow pointer will move the (n-k) nodes fro start i.e in the end slow will ne k nodes away from end pointing at the kth node from the end.
*/

#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

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

Node* klast(Node* head, int k){
    if(head == NULL) return NULL; // If list is empty
    Node* slow = head;
    Node* fast = head;
    
    while(k--){
        fast = fast->next;
    }

    while(fast != NULL){
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

int main(){
    Node* head = NULL;
    int k;

    cin>>k;

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

    cout<<k<<" th node from the last is "<<klast(head, k)->data<<endl;

    return 0;
}