
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

    approach : for column % 2 == 0 then we'll print the row from 0 to (n-1) and for column % 2 != 0 then we'll print row from (n-1) to 0

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