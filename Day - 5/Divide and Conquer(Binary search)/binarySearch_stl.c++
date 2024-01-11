/*
For searching an element find() can also be used but if array is sorted then binary search works more efficiently. Time clomplexity of binary search is less then find().
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {1, 5, 8, 12, 12, 12, 12, 13, 20, 25};
    int n = sizeof(a)/sizeof(int), key;

    cin>>key;

    bool present = binary_search(a, a+n, key);
    if (present) {
        cout<<"Element is present\n";
    } else {
        cout<<"not present.\n";
    }

    auto it = lower_bound(a, a+n, key);
    cout<<"Lower bound is : "<<it-a<<"\n";

    it = upper_bound(a, a+n, key);
    cout<<"Upper bound is : "<<it-a<<endl;

    return 0;
}