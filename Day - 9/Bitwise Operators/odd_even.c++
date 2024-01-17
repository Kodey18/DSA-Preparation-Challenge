/*
for n = 5(odd) in binary = 101 to check if it is odd, all odd values has 1 at lsd.
*/
#include <iostream>
using namespace std;

int main() {
    int n, lsb;

    cin>>n;

    lsb = (n&1) == 0 ? 0 : 1;

    if(lsb==1){
        cout<<"The number " << n << " is Odd." << endl;
    } else {
        cout<<"The number " << n << " is Even." << endl;
    }
    return 0;
}