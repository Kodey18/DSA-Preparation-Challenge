/*
Kadane's Algo : 
The idea of Kadane’s algorithm is to maintain a variable max_ending_here that stores the maximum sum contiguous subarray ending at current index and a variable max_so_far stores the maximum sum of contiguous subarray found so far, Everytime there is a positive-sum value in max_ending_here compare it with max_so_far and update max_so_far if it is greater than max_so_far.

algorithm : 
nitialize:
    max_so_far = INT_MIN
    max_ending_here = 0

Loop for each element of the array

  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
  (c) if(max_ending_here < 0)
            max_ending_here = 0
return max_so_far
*/

#include <iostream>
#include <climits>
using namespace std;

void kadaneAlgo(int arr[], int n){
    int max_tillNow = INT_MIN;
    int max_here = 0;

    for(int i = 0; i < n; i++){
        max_here = max_here + arr[i];
        if(max_tillNow < max_here){
            max_tillNow = max_here;
        }
        if(max_here < 0){
            max_here = 0;
        }
    }

    cout<<max_tillNow<<"\n";
}

int main() {
    // Testing Kadane's algorithm on an example array.
    int t ,n;

    cin>>t;

    while(t--){
        cin>>n;

        int *a = new int[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        kadaneAlgo(a, n);

        delete a;
    }
    
    return 0;
}