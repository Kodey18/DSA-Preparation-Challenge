#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {1, 3, 5, 5, 5, 5, 8, 14};
    int key = 5, n = sizeof(a) / sizeof(int);

    int *ptr = find(a, a+n, key);
    int index = ptr - a;
    if(index < n){
        cout<<"Key founnd at : "<<index<<"\n";
    } else {
        cout<<"Key not found\n";
    }

    return 0;
}