/*
Merger sort : 
1 -> Divide
2 -> Sort
3 -> merge
*/

#include <iostream>
using namespace std;

void merge(int *a, int *b, int *c, int s, int e){
    // Merge the two parts of array.

    int mid = (s + (e-s)/2), i = s, j = mid+1, k = s;

    while(i <= mid && j <= e){
        if(b[i] <= c[j]){
            a[k++] = b[i++];
        } else {
            a[k++] = c[j++];
        }
    }

    while(i <= mid){
        a[k++] = b[i++];
    }

    while(j <= e){
        a[k++] = c[j++];
    }
}

void mergeSort(int *a, int s, int e){
    // base case
    if(s >= e){
        return;
    }

    int mid = s + (e - s)/2, b[100], c[100];

    for(int i = s; i <= mid; i++){
        b[i] = a[i];
    }

    for(int i = mid+1; i <= e; i++){
        c[i] = a[i];
    }

    mergeSort(a, s, mid);
    mergeSort(a, mid+1, e);
    merge(a, b, c, s, e);
}

void print(int *a, int n){
    cout<<"here2\n";
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}

int main() {
    int arr[] = {2, 4, 1, 6, 5, 3}, n = sizeof(arr)/sizeof(int);

    mergeSort(arr, 0, n-1);
    cout<<"here3\n";
    print(arr, n);
    
    return 0;
}