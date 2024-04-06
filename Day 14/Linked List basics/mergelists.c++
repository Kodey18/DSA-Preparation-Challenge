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

/*
primitive approach : create a new third list and parse through the given 2 sorted list by comparing  their nodes value and inserting smaller one in the third.
*/
Node* mergelist(Node* head1, Node* head2){
    // Base cases 
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;

    Node* head3;
    
    /* pick the smaller one and recurse on remaining list. Basically with each recursive call we are chosing the smaller value and making the list small by moving the head to next to chose from another small value. */
    if (head1->data > head2->data) {
        head3 = head2;
        head3->next = mergelist(head1, head2->next);
    } else {
        head3 = head1;
        head3->next = mergelist(head1->next, head2);
    }

    return  head3;
}

void printList(Node* head){
    Node* temp = head;
    for(; temp != NULL; temp = temp->next){
        cout<<temp->data<<" ";
    }
}

int main(){
    Node* h1 = NULL;
    Node* h2 = NULL;
    int data;

    while(1){
        cout<<"Enter list 1 data (to stop enter -1 && list should be sorted) : ";
        cin>>data;
        if(data == -1){
            break;
        } else {
            insertAtEnd(h1, data);  //inserting the entered value at end of the list.
        }
    }

    while(1){
        cout<<"Enter list 2 data (to stop enter -1 && list should be sorted) : ";
        cin>>data;
        if(data == -1){
            break;
        } else {
            insertAtEnd(h2, data);  //inserting the entered value at end of the list.
        }
    }

    Node* h3 = mergelist(h1, h2);
    printList(h3);   //printing the merged and sorted list.

    return 0;
}