/*
for a given position let say 5 then clear(unset bit) all the bits from 1 to 5. The mask required for unsetting bits from 1 to pos should be have 0s from 1 to pos and 1s from pos+1 so that the bits after the pos i.e bits from pos+1 will not get effected by bitwise & operator
*/

#include <iostream>
using namespace std;

int main() {
    int n, mask, pos;

    cin>>n>>pos;

    mask = (~0)<<pos;

    n = (n&mask);
    cout<<n;

    return 0;
}