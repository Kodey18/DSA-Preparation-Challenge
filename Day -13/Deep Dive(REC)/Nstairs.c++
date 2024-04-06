/*
N-stairs Problem : 
There are n stairs and you can take atmost k steps at a time. WAP tp find the total number ways to reach/ climb the n-stairs. 
*/

#include <iostream>
using namespace std;

int steps(int  n, int k){
    if(n <= 1){
        return 1;
    }

    return steps(n-1, k) + steps(n-k, k);
}

int main() {
    int n, k; // number of stairs and steps.

    cin>>n>>k;

    cout<<"Total ways : "<<steps(n, k);

    return 0;
}