#include <iostream>
using namespace std;

void updateBit(int &n, int pos, int v){
    // first lets clear the bit(means change the bit to 0) at pos
    int mask = (1 << pos);
    mask = ~mask;
    n = n & mask;
    // ny doing the above operations the bit at pos is updated to 0.

    // create a new mask according to the value v(means for v = 1 or v = 0) that has to be updated at pos.
    mask = v << pos;
    n = n | mask;
}

int main() {
    /*
    writing a common function for setting or unsetting a bit on a particular position.
    */

    int n, pos, v;

    // n is the number, pos is the position of bit in number n and v is value 1 or 0 that has to be updated at that position
    cin>>n>>pos>>v;

    updateBit(n, pos, v);

    cout<<n;
    
    return 0;
}