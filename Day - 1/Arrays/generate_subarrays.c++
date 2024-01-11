/*
Subarrays : subarrays are basically a contigous sequence.(All subarrays are sub-sequences but all sub-sequences are not sub-arrays.)
Generaate all possible sub-arrays of an Array.
(Using non-recursive approach)
*/
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k <= j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
