/*
in a given array find the first occurence of a given key.
*/

#include <iostream>
using namespace std;

// Recursion using iterator.
int findKey(int a[], int key, int i, int n){

    // base case : that iterator reached end of the array without any occurence.
    if(i == n-1){
        return -1; // Key not found in the array.
    }

    if(a[i] == key){
        return i;  // Found the key at index 'i'.
    }

    findKey(a, key, i+1, n);
}

/*
Another approach : We can also solve this without iterating the array by updating the pointer to the array.

    int findKey(int *a, int n, int key){
        if(n == 0){
            return -1;   // If no element is present in the array then return -1.
        }

        if(a[0] == key){
            return 0;   // The first element is our desired number so return its position which is 0.
        }

        int i = findKey(a+1, n-1, key);
        if(i == -1){
            // key not found.
            return -1;
        }

        return i+1;
    }
*/

int main() {
    int arr[] = {23, 45, 67, 45, 45, 23, 89, 10}, n = sizeof(arr)/sizeof(int), key;

    cin>>key;

    int ans = findKey(arr, key, 0, n);

    if(ans != -1){
        cout<<"First Occurence is at Index: "<<findKey(arr, key, 0, n)<<endl;
    } else{
        cout<<"Given Key is Not Present in Array."<<endl;
    }

    return 0;
}