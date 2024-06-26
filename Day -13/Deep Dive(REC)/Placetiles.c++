/*
Problem : given a 4xn canvas and 1x4 tile. WAP to calculate number of ways a tile can be arranged.
*/

#include <iostream>
using namespace std;

int ways(int n){
    if(n <= 3){
        return 1;
    }

    return ways(n-1) + ways(n-4);
}

int main() {
    int n;

    cin>>n;

    cout<<ways(n);

    return 0;
}