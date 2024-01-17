/*
for a given binary number find the value of the ith bit(0 or 1)
*/ 
#include <iostream>
using namespace std;

int main() {
    int n, pos, value;

    cin>>n>>pos;

    /*
    what we are doing here is that first we are left shift 1 to the position(pos) given then taking & with number resulting in every bit other than pos bit to 0 and then right shifting the result again by pos to get 1 or 0 value at the lsd. 
    */
    cout<<((n&(1<<pos-1))>>pos-1);

    return 0;
}