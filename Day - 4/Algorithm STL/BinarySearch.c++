#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 4, 6, 7, 12, 25, 50};
    int n = sizeof(arr) / sizeof(int), key = 25;

    bool present = binary_search(arr, arr+n, key);

    if(present){
        cout<<"kwey found.\n";
    } else {
        cout<<"key not found.\n";
    }
    
    return 0;
}