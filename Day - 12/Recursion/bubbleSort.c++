/*
WAP to implement bubble Sort algorithm in C++ using recursion. 
*/

#include <iostream>
using namespace std;

void bubbleSort(int *a, int i, int n){
    if (i == n-1){
        return;
    }

    for(int j = 0; j < n - 1- i; j++){
        if(a[j] > a[j+1]){
            swap(a[j], a[j+1]);
        }
    }

    bubbleSort(a, i+1, n);
}

void print(int *a, int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";

    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1}, n = sizeof(arr)/sizeof(int);

    bubbleSort(arr, 0, n);
    print(arr, n);

    return 0;
}