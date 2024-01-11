#include <iostream>
using namespace std;

int main() {
    int n; 
    cin>>n;

    // initialising every cell with zero.
    int *a = new int[n]{0};

    // instead of giving the array size it will give the size the pointer(created in static memory).
    cout<<sizeof(a);

    // deallocation.
    delete [] a;
    
    return 0;
}