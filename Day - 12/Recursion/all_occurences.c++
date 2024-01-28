#include <iostream>
using namespace std;

int flag = 0;

void printOccurence(int a[], int n, int i, int key){
    if(i == n){
        return ;
    }

    if(a[i] == key){
        flag = 1;
        cout<<i<<" ";
    }

    printOccurence(a, n, i+1, key);
}

/*
another approach : 

*/

int main() {
    // your code goes here
    int arr[] = {2, 3, 2, 5, 2, 1, 4, 5, 6}, n = sizeof(arr)/sizeof(int), key;

    cin>>key;

    printOccurence(arr, n, 0, key);

    if(flag == 0){
        cout << "Element not found";
    }
    
    return 0;
}