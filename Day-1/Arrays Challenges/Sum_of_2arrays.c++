/*
problem : 
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, the size of second array and take M more inputs and store that in second array. Write a function that returns the sum of two arrays. Print the value returned.

Constraints
Length of Array should be between 1 and 1000.

Sample Input
4
1 0 2 9
5
3 4 5 6 7
Sample Output
3, 5, 5, 9, 6, END
Explanation
Sum of [1, 0, 2, 9] and [3, 4, 5, 6, 7] is [3, 5, 5, 9, 6] and the first digit represents carry over , if any (0 here ) .
*/

#include <iostream>
using namespace std;

void printarray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<", ";
    }
    cout<<"END";
}

int main() {
    int n, m;

    cin>>n;

    /*
    dynamic allocation of the array as c++ doesn't allow int arr[n] cuz it requires the size at the compile time but we are taking n as the user input so that becomes the runtime. 
    */
    int *a1 = new int[n];

    for(int i = 0; i < n; i++){
        cin>>a1[i];
    }

    cin>>m;

    int *a2 = new int[m];

    for(int i = 0; i < m; i++){
        cin>>a2[i];
    }

    if(n >= m){
        for(int i = n-1, j = m-1; j >= 0; j--, i--){
            if(a1[i] + a2[j] >= 10){
                a1[i] = (a1[i] + a2[j]) % 10;
                a1[i-1] = a1[i-1] + 1;
            }
            else if(a1[i] + a2[j]){

            } else {
                a1[i] = (a1[i] + a2[j]);
            }
        }

        printarray(a1, n);
    } else {
        for(int i = n-1, j = m-1; i >= 0; j--, i--){
            if(a1[i] + a2[j] >= 10){
                a2[j] = (a1[i] + a2[j]) % 10;
                a2[j-1] = a2[j-1] + 1;
            } else {
                a2[j] = a1[i] + a2[j];
            }
        }

        printarray(a2, m);
    }

    return 0;
}