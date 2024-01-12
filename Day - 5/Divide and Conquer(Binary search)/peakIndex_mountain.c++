/*
An array arr is a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.(when it is given this means its and hint towards the binary search.)


Example 1:

Input: arr = [0,1,0]
Output: 1
Example 2:

Input: arr = [0,2,1,0]
Output: 1
Example 3:

Input: arr = [0,10,5,2]
Output: 1

Constraints:

3 <= arr.length <= 105
0 <= arr[i] <= 106
arr is guaranteed to be a mountain array.
*/

#include <iostream>
using namespace std;

int findPeak(int a[], int n){
    /*
    The approach is simple. Using binary search we'll go to the mid element and check the condition provided to be the peak.(i element is peak only if a[i] > a[i-1] && a[i] > a[i+1]) So if this condition satisfies then return with i and if not then check that if a[i] > a[i-1] this condition is not true then peak is in the left sub array and a[i] > a[i+1] if this condition is not true then peak is in right sub array.
    */

    int s = 0, e = n-1;

    while(s <= e){
        int mid = (s+e)/2;

        if((a[mid] > a[mid-1]) && (a[mid] > a[mid+1])){
            // peak found.
            return mid;
        } else if(a[mid] < a[mid-1]){
            // move to left sub array.
            e = mid - 1;
        } else {
            // move to right subarray.
            s = mid + 1;
        }
    }
}

int main() {
    int mountain[105], n;

    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>mountain[i];
    }

    cout<<"peak is : "<<mountain[findPeak(mountain, n)]<<"\n";

    return 0;
}