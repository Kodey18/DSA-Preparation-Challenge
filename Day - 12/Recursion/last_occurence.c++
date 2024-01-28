/*
Wap to find the last occurence of a given key.
*/

#include <iostream>
using namespace std;

/*
recursive approach using iterator.

    int lastOccur(int a[], int n, int key){
        if(n < 0){
            return -1; // no occurence found.
        }

        if(a[n] == key){
            return 0; // found the key.
        }
        // call for next element from array.
        int res = lastOccur(a, n-1, key);
        if(res == -1){
            // key not found.
            return -1;
        }

        return res+1;
    }
*/

// another iterative approach
int last_occurence(int a[], int n, int key){
    if(n < 0){
        return -1;
    }

    if(a[n] == key){
        return n;
    }

    last_occurence(a, n-1, key);
}

int main() {
    int arr[] = {2, 3, 4, 6, 7, 1, 2, 5, 6, 7, 8}, n = sizeof(arr)/sizeof(int), key;

    cin>>key;

    // int ans = lastOccur(arr, n-1, key);

    int ans = last_occurence(arr, n-1, key);

    if(ans == -1){
        cout<<"Key is not present in the array."<<endl;
    } else {
        cout<<"Last occurrence of "<<key<<" is at index: "<<ans<<endl;
    }
    
    return 0;
}