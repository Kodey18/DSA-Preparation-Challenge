/*
Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . Find if element x is present in the matrix or not.

Input Format
First line consists of two space separated integers N and M, denoting the number of element in a row and column respectively. Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order. Third line of each test case contains a single integer x, the element to be searched.

Constraints
1 <= N,M <= 30 0 <= A[i] <= 100

Output Format
Print 1 if the element is present in the matrix, else 0.

Sample Input
3 3
3 30 38
44 52 54
57 60 69
62

Sample Output
0

Explanation
Search the element in the sorted matrix. If the element is present print 1 otherwise print 0. In the sample input,in first case 62 is not present in the matrix so 0 is printed. Similarly, for second case 55 is present in the matrix so 1 is printed.
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, x;

    cin>>n>>m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>x;
            mat[i].push_back(x);
        }
    }

    cin>>x;

    /*
        Brute force : Brute force approach will be to iterate all over the array kind of like doing the linear search. But as the sorted array is given we can apply binary search kind of technique using the two pointers. p1 -> (0,0) aand p2 => (n-1,m-1)
    */
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(x == mat[i][j]){
                cout<<"1";
                i = n;
                j = m;
            }
        }
    }

    // for(int i = n-1; ;){
    //     for(int j = m-1; ;){
    //         if(x == mat[i][j]){
    //             cout<<"1";
    //             i = -1;
    //             j = -1;
    //         } else if(x > mat[0][j]){
    //             j--;
    //         }
    //     }
    // }
    return 0;
}