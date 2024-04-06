/*
Prateek Bhayia likes to play with bits. One day Prateek bhayia decides to assign a task to his student Sanya. You have help Sanya to complete this task. Task is as follows - Prateek Bhayia gives Q queries each query containing two integers a and b. Your task is to count the no of set-bits in for all numbers between a and b (both inclusive)

Input Format
Read Q - No of Queries, Followed by Q lines containing 2 integers a and b.

Constraints
Q,a,b are integers.

Output Format
Q lines, each containing an output for your query.

Sample Input
2
1 1
10 15

Sample Output
1
17
*/

#include <iostream>
using namespace std;

int countSetBits(int a, int b){
    int count = 0, temp;
    for(int i = a; i <= b; i++){
        temp = i;
        while(temp > 0){
            if((temp&1) == 1){
                count++;
            }
            temp >>= 1;
        }
    }

    return count;
}

int main() {
    int q, a, b;

    cin>>q;

    while(q--){
        cin>>a>>b;

        cout<<countSetBits(a, b)<<"\n";
    }

    return 0;
}