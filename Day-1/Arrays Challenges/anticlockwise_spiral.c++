/*
Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.

Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints
Both M and N are between 1 to 10.

Output Format
All M * N integers separated by commas with 'END' written in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END

Explanation
For spiral level anti-clockwise traversal, Go for first column-> last row ->last column-> first row and then do the same traversal for the remaining matrix .
*/

#include <iostream>
using namespace std;

void antiClockwiseSpiral(int mat[][10], int n, int m){
    // initialising the 4 iterators
    int sc = 0, ec = m-1, sr = 0, er = n-1;

    while(sc <= ec && sr <= er){
        for(int i = sr; i <= er; i++){
            cout<<mat[i][sc]<<", ";
        }
        sc++;

        for(int i = sc; i <= ec; i++){
            cout<<mat[er][i]<<", ";
        }
        er--;

        for(int i = er; i >= sr; i--){
            cout<<mat[i][ec]<<", ";
        }
        ec--;

        for(int i = ec; i >= sc; i++){
            cout<<mat[sr][i]<<", ";
        }
        sr++;
    }
}

int main() {
    int m, n; // rows and columns of the matrix

    cin>>n>>m;

    int mat[10][10];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>mat[i][j];
        }
    }

    antiClockwiseSpiral(mat, n, m);

    return 0;
}