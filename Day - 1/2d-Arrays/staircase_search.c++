/*
Stair case search is one of the fastest way to search in a matrix provided that the array is sorted row wise and column wise both.

approach 1 : 
Brute force for finding a element in such an array would be iterating over the matrix using two loops.

approach 2 (more optimized than approach 1):
Another approach or this will be using binary search. looping on rows and for every rwo using the binary search that if that row has the element or not and if not then go forward to next row.

approach 3 (stair case search) :
starting from the right upper corner element say ptr. if ptr == key then stop key found, if ptr < key then go down(only two options go left or down as the array is sorted both row wise and column wise key is greater then ptr so we won't find key in left direction.) if ptr > key then go in left direction and perform this in loop untill key is found or we cross the last row or first column.
*/

#include <iostream>
using namespace std;

pair<int,int> staircase_search(int arr[][100], int n, int m, int k){
    // row and column
    int r = 0, c = m-1, ans = -1;

    while(r < n && c >= 0){
        if(arr[r][c] == k){
            return make_pair(r,c);
        } else if(arr[r][c] < k){
            // go down
            r++;
        } else {
            // go left
            c--;
        }
    }

    return make_pair(-1,-1);
}

int main() {
    int mat[100][100], n, m, key;

    cin>>n>>m;

    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < m; j++){
            cin >> mat[i][j];
        }
    }

    cin>>key;

    pair<int, int> p = staircase_search(mat, n, m, key);
    if(p.first == -1){
        cout << "Element is not present in the array"<<endl;
    } else {
        cout << "Element is present at ("<<p.first<<","<<p.second<<")"<<endl:
    }

    return 0;
}