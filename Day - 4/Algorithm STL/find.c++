#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {1, 3, 5, 8, 14};
    int key = 23;

    int *ptr = find(a, a+5, key);
    int index = ptr - a;
    if(index < 5){
        cout<<"Key founnd at : "<<index<<"\n";
    } else {
        cout<<"Key not found\n";
    }

    return 0;
}