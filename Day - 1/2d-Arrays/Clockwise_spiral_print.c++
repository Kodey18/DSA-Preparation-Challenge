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
11, 12, 13, 14, 24, 34, 44, 43, 43, 41, 32, 21, 22, 23, 33, 32, END

*/

#include <iostream>
using namespace std;

void clockwiseSpiral(int mat[][10], int n, int m){
    // initialising the 4 iterators
    int sc = 0, ec = m-1, sr = 0, er = n-1;

    while(sc <= ec && sr <= er){
        for(int i = sc; i <= ec; i++){
            cout<<mat[sr][i]<<", ";
        }
        sr++;

        for(int i = sr; i <= er; i++){
            cout<<mat[i][ec]<<", ";
        }
        ec--;

        for(int i = ec; i >= sc; i--){
            cout<<mat[er][i]<<", ";
        }
        er--;

        for(int i = er; i >= sr; i--){
            cout<<mat[i][sc]<<", ";
        }
        sc++;
    }
}

int main() {
    int n, m;

    cin>>n>>m;

    int mat[10][10];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>mat[i][j];
        }
    }

    clockwiseSpiral(mat, n, m);

    return 0;
}