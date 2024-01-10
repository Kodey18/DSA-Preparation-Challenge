/*
Sorting the string lexographically.
*/
#include <iostream>
// #include <stdlib.h>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;

    string s[100];
    cin.get(); // to ignore the nex line as input string.

    for(int i = 0; i < n; i++){
        getline(cin, s[i]);
    }

    sort(s, s+n);

    for(int i = 0; i < n; i++){
        cout<<s[i]<<" ";
    }

    return 0;
}