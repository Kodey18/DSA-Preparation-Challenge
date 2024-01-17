#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cin>>n;

    while(n){
        if((n&1) == 1){
            /*
            by doing n&1 we will get the value of lsd and then if lsd is 1 then increase the set bit count. after this lets bring the other bit to the lsd to check the same and thill will continue till we have checked all the bits
            that means till n != 0
            */
            count++;
        }
        // the second bit shift to first bit(lsb).
        n = (n>>1); 
    }

    cout<<count;
    
    return 0;
}