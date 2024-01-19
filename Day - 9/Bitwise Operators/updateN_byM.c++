/*
for a given number n update its bit in a range  by using the number m.
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, start, end, mask;

    cin>>n>>m;

// first unsetting the bits of n in the range given.
    // mask = (((~0)<<end)|(1<<(start-1));
    // mask is all bits 1
    mask = (~0);

    // making the last end bits to 0
    mask = (mask<<end);

    mask = (mask|((1<<(start-1))-1));
    return 0;
}