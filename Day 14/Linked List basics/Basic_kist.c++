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

// here head is passed as an refernce instead of a copy so any changes made here will reflect in main().
void insertAtHead(Node* &head, int data){
    if(head == NULL){
        head = new Node(data);
    } else {
        Node* newNode = new Node(data);   //create a new node with given data
        newNode->next = head;     //point new node to existing first node 
        head = newNode;     //make new node as the new head of the list
    }
}

int listLength(Node* head){
    int length = 0;
    Node* temp = head;

    for(; temp != NULL; temp = temp->next){
        length++;
    }

    return length;
}

void insertAtMiddle(Node* &head, int data, int position){
    if(head == NULL){
        cout<<"Linked list is empty.\n";
    } else if(position > listLength(head)){
        cout<<"Position is not present in the list.\n";
    } else {
        Node *newNode = new Node(data);
        Node* temp = head;
        for(int i = 0; i < position-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void insertAtEnd(Node* &head, int data){
    if(head == NULL){
        head = new Node(data);
    } else {
        Node* temp = head;
        for(; temp->next != NULL; temp = temp->next){}
        temp->next = new Node(data);
    }
}

void deleteAthead(Node* &head){
    if(head == NULL) {
        cout << "The linked list is already empty\n";
    } else {
        Node* temp = head->next;
        delete head;
        head = temp;
    }
}

void deleteAtEnd(Node* head){
    if (head == NULL) {
        cout << "The linked list is already empty\n";
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

bool linearSearch(Node* head, int key){
    if(head == NULL){
        cout<<"Empty list\n";
    } else {
        Node* temp = head;
        while(temp!=NULL){
            if(temp->data == key){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
}

bool recursiveSearch(Node* head, int key){
    //base case
    if(head->data == key){
        return true;
    } else if(head == NULL){
        return false;
    }

    recursiveSearch(head->next, key);
}

void printList(Node* head){
    Node* temp = head;
    for(; temp != NULL; temp = temp->next){
        cout<<temp->data<<" ";
    }
}

int main(){
    Node* head = NULL;   //creating a new linked list with one element.

    insertAtHead(head,3);
    insertAtHead(head,5);
    insertAtHead(head,7);
    insertAtHead(head,9);

    insertAtMiddle(head, 11, 3);

    insertAtEnd(head, 100);

    deleteAthead(head);

    deleteAtEnd(head);

    if(linearSearch(head, 5)){
        cout<<"5 is present in list.\n";
    } else {
        cout<<"5 is not present in list.\n";
    }

    if(linearSearch(head, 100)){
        cout<<"100 is present in list.\n";
    } else {
        cout<<"100 is not present in list.\n";
    }

    printList(head);

    return 0;
}