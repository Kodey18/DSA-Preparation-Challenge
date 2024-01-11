/*
You are given a one dimensional array that may contain both positive and negative integers, find the sum of contiguous subarray of numbers which has the largest sum. For example, if the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7.

Input Format
The first line consists of number of test cases T. Each test case consists of two lines.
The first line of each testcase contains a single integer N denoting the number of elements for the array A.
The second line of each testcase contains N space separated integers denoting the elements of the array.

Constraints
1 <= N <= 100000

1 <= t <= 20

-100000000 <= A[i] <= 100000000

Output Format
Output a single integer denoting the maximum subarray sum for each testcase in a new line.

Sample Input
2
4
1 2 3 4
3
-10 5 10
Sample Output
10
15

Note : the array inputed is not sorted array.

Explanation
For the first testcase, maximum subarray sum is generated by the entire array - 1+2+3+4 = 10
For the second testcase , maximum subarray sum is generated by the subarray {5,10} - 5+10 = 15

brute force approach : 
lets just find all the possible sub-arrays and then for each sub-array find its sum to find the maximum of all sums. The brute force approach will fail for the above constraints.optimised approach for this will be kadane's Algorithm.

*/

#include <iostream>
using namespace std;

int subarray(int arr[], int i, int j){
    int curr_max = 0;
    for(int k = i; k <= j; k++){
        curr_max = curr_max + arr[k];
    }

    return curr_max;
}

void maxSum_subarray(int arr[], int n){
    int max_till_now = 0;
    int new_max;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            new_max = subarray(arr, i, j);
            if(new_max > max_till_now){
                max_till_now = new_max;
            };
        }
    }

    cout<<max_till_now<<"\n";
}

int main() {
    int t, n, max_sum;

    cin>>t;

    while(t--){
        cin>>n;

        int *arr = new int[n];

        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        maxSum_subarray(arr, n);

        delete arr;
    }

    return 0;
}