/*
Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.



Input Format
First line contains a single integer N. Next N lines contain N space separated integers.

Constraints
N < 1000

Output Format
Print N lines with N space separated integers of the rotated array.

Sample Input
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Sample Output
4 8 12 16 
3 7 11 15 
2 6 10 14 
1 5 9 13 

Explanation
Rotate the array 90 degrees anticlockwise.
*/

#include <iostream>
using namespace std;

void rotate90_anti(int mat[][100], int n, int m){
    // /*
    //     to rotate the image anticlockwise first we have to reverse the rows and then take the transpose of it to get the 90 degree rotate image.
    // */
    // for(int i = 0; i < n; i++){
    //     int x = 0, y = m - 1;
    //     while(x < y){
    //         swap(mat[i][x], mat[i][y]);
    //         x++;
    //         y--;
    //     }
    // }

    // /*
    // 1 2 3
    // 4 5 6
    // 7 8 9
    // */
    // for(int i = 1; i < n; i++){
    //     for(int j = 0; j < i; j++){
    //         // Swap elements of each row with corresponding element in last column
    //         swap(mat[i][j], mat[j][m - i - 1]);
    //     }
    // }

    // lets first create the transpose matrix.
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            swap(mat[j][i], mat[j][m - i - 1]);
        }
    }

    cout<<"Rotated array will be : \n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main() {
    int n, m;
    int mat[100][100];

    cin>>n>>m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>mat[i][j];
        }
    }

    rotate90_anti(mat, n, m);

    return 0;
}