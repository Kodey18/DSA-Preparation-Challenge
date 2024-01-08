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

    /*
        wave print problem
        
        below code is not for spiral but instead it is for printing in zig-zag manner.
        Sample input : 
        3 3
        1 2 3
        4 5 6
        7 8 9
        
        sample output : 
        1, 4, 7, 8, 5, 2, 3, 6, 9, END


    */

#include <iostream>
using namespace std;

int main() {
    int mat[10][10];
    int n, m;

    cin>>n>>m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>mat[i][j];
        }
    }

    int flag = 0,  k = 0;
    for(int j = 0; j < m; j++){
        while((flag == 0 ? (k < n) : (k >= 0))){
            cout<<mat[k][j]<<", ";
            flag == 0 ? (k++) : (k--);
        }
        (flag == 0) ? (k--) : (k++);
        flag = 1 - flag;
    }

    cout<<"END";

    return 0;
}  