/*
n = 10 = (1010), now for this exmaple it is asked to unset the 3rd bit i.e 1 (in binary representation we start counting from right to left or from lSD to MSD and asle the bits are zero-based indexed). Now we have to unset only 3rd bit so other bits should not get effected and to do this we need to create a mask. 
A mask is an self created number that supports are operation and for unseting we can use any kind of bitwise operators in any order like for the below approach we'll ne using the property of & operator.
doing & between any bit and 1 returns the bit only and anding with opposite bit returns 0 so the mask for this n = 10 = 1010 will be masl = 0100 by doing and between these only the 3rd bit will get unset leaving others unaffected. 
*/

#include <iostream>
using namespace std;

int main() {
    int n, position, i;

    cin>>n>>position;

    /*
    Below we are left shifting 1(in binary) by 3 to create 1000(in binary).
    */
    i = 1 << position;

    /*
    using the not(~) operator the 1000(in binary) i will be converted to 0111(in binary) which is the mask that is required for unsetting the 3rd bit.
    */
    i = ~i;

    /*
    For unsetting we have to do the and operation with mask.
    */
    n = n & i;

    cout<<n;

    return 0;
}