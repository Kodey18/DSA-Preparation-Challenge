#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 3, 15, 15, 20, 35, 41, 45,49, 49};
    int n = sizeof(arr)/sizeof(int), key = 2;

    // lower bound will find a value in arr such that key passed should be <= .
    int *ans = lower_bound(arr, arr+n, key);
    if((ans - arr) == n){
        cout << "Element not found"<<endl;
    } else {
        cout<<"value : "<<*ans<<"\n";
        cout<<"index : "<<(ans - arr);
    }

    // uppre bound will find a value in arr such that key passed should be >=.
    int *ans = upper_bound(arr, arr + n ,key);
    if((ans - arr) == n){
        cout << "\nElement not found\n";
    } else {
        cout<<"\nvalue : "<<*ans<<"\n";
        cout<<"index : "<<ans - arr<<"\n";
    }

    return 0;
}