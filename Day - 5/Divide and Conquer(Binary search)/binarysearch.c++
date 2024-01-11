/*
Binary seaarch is a divide and conquer algorithm used for efficiently searching a key.
*/

#include <iostream>
using namespace std;

int binarysearch(int a[], int n, int key){
    int start = 0, end = n-1;

    while(start <= end){
        int mid = (start + end)/2;
        if(a[mid] == key){
            return mid;
        } else if(a[mid] > key) {
            // key is left half of the array.
            end = mid - 1;
        } else {
            // key is in right half of array.
            start = mid + 1;
        }
    }

    //  if element is not in the array.
    return -1;
}

/*

    recursive approach : 

    int binarysearch(int a[], int s, int e, int key){
        int mid = (s+e)/2;

        if(s > e){
            return -1;
        }

        if(a[mid] == key){
            return mid;
        } else if(a[mid] < key){
            // recurse on the right side of the array.
            return binarysearch(a, mid+1, e, key);
        } else {
            // recurse on the left side of the array.
            return binarysearch(a, s, mid-1, key);
        }
    }

*/

int main() {
    int arr[] = {1, 3, 4, 6, 8, 9, 13};
    int n = sizeof(arr)/sizeof(int), key;

    cin>>key;

    int indx = binarysearch(arr, n, key);
    if(indx == -1){
        cout<<"Element is not present in the array."<<endl;
    } else {
        cout<<"Element is present at index "<<indx<<"\n";
    }

    return 0;
}