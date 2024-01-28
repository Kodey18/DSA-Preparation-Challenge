/*
WAP using recursion to check if the given array is sorted or not using recursion.
*/

#include <iostream>
using namespace std;

bool isSorted(int a[],int i, int n){
    // base case : once we reach the end of the array means it is sorted.
    if(i == n-1){
        return true;
    }

    // check if the cureent element is smaller then next or not.
    if(a[i] > a[i+1]){
        return false;
    }

    isSorted(a, i+1, n);
};

int main() {
    int arr[] = {1, 4, 7, 9, 13};
    int n = sizeof(arr)/sizeof(int);

    if(isSorted(arr, 0, n)){
        cout<<"Array is sorrted.";
    } else {
        cout << "Array is not sorted";
    }
    
    return 0;
}