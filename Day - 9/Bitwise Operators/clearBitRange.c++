/*
for a given position let say 5 then clear(unset bit) all the bits from 1 to 5. The mask required for unsetting bits from 1 to pos should be have 0s from 1 to pos and 1s from pos+1 so that the bits after the pos i.e bits from pos+1 will not get effected by bitwise & operator
*/

#include <iostream>
#include <algorithm>
using namespace std;

/*
next part of the question will be clearing the range that may or may not start with 0 i.2 eg : between 3 to 6 or 1 to 5 etc.
*/
void clearRange(int n, int start, int end){
    int mask;

    // mask with all bits 1
    mask = (~0);

    // mask with 0 to end bits as 0.
    mask = (mask<<end);

    // this will create the final mask that is required.
    mask = (mask|((1<<start)-1));

    cout<<(n&mask);
}   

int main() {
    /*
        int n, mask, pos;

        cin>>n>>pos;

        mask = (~0)<<pos;

        n = (n&mask);
        cout<<n;
    */
    int n, start, end;

    cin>>start>>end;

    clearRange(n, start, end);

    return 0;
}