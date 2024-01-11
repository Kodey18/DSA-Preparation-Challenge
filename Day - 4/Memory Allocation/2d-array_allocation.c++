#include <iostream>
using namespace std;

int main() {
    int n, m;

    // this pointer is for storing the addr of first cell of pointer array.
    int **arr;
    
    arr = new int*[n];

    for(int i = 0; i < n; i++){
        arr[i] = new int[m];
    }

    cin>>n>>m;
    return 0;
}