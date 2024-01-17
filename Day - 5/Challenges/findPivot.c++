/*

You are given a sorted but rotated array. You need to fine the index of the pivot element of the array where pivot is that element in the array which is greater than its next element and divides the array into two monotonically increasing halves.

Input Format
The first line denotes N - the size of the array. The following N lines each denote the numbers in the array.

Constraints
Size of the array <=1,000,000

Output Format
Output the index of the pivot of the array.

Sample Input
5
4
5
1
2
3
Sample Output
1

Explanation
Here, 5 is the pivot element. Thus the output is 1 which is 5's index.
*/
#include <iostream>
using namespace std;

// int findPivot(int a[], int n){
//     // If the array contains only one element then return 0 as it is the pivot
//     if(n == 1){
//         return 0;
//     }
//     // Initialize the left and right pointers to traverse the array from both ends towards the middle
//     int s = 0, e = n -1;

//     while(s <= e){
//         int mid = s + (e - s)/2;

//         if(a[mid] > a[mid + 1]){
//             return mid;
//         } else if(a[mid] < a[s]){
//             e = mid - 1;
//         } else {
//             s = mid + 1;
//         }
//     }
// }

// brute approach :
int findPivot(int a[], int n){
    for(int)
}

int main() {
    //  8 9 1 2 3 4 5 6 7
    int arr[100000], n;

    cin>>n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout<<findPivot(arr, n);

    return 0;
}