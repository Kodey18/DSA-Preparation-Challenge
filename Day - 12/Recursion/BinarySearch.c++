/*
Implement binary search algorithm using Recursion.
*/

#include <iostream>
using namespace std;

// function to perform binary search.
int BinarySearch(int a[], int key, int s, int e){
    if(s > e){
        return -1; // element not found
    }

    int mid = s + (e - s)/2;

    if(a[mid] == key){
        return mid; // element found at index 'mid'
    } else if(a[mid] > key){
        return BinarySearch(a, key, s, mid-1);
    } else {
        return BinarySearch(a, key, mid+1, e);
    }
}

int main() {
    int arr[] = {1, 4, 6, 8, 12, 17, 35, 40}, n = sizeof(arr)/sizeof(int), key;

    cin>>key;

    int ans = BinarySearch(arr, key, 0, n-1);
    if(ans == -1){
        cout<<"Key not found.\n";
    } else {
        cout<<"Element is present at index "<<ans<<"\n";
    }
    
    return 0;
}