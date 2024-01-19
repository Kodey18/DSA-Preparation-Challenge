/*
approach 1 : 
Recursive approach to print the binary equivalent of a number.
void toBinary(int n){
    if(n == 0){
        return;
    }

    tobinary(n/2);

    cout<<(n%2);
}
*/

/*
Approach 2 :
By using a loop(n != 0)where we keep using n%2 and n = n / 2 and pushing the answer back toa vector or array and then rpint it out in reverse.
*/

#include <iostream>
using namespace std;

/*
Approach 3 : by using the right shift operator we can do the and of lsd with 1 giving us the lsd in return for printing and then right shift by 1 and continue doing it utill the number left is 0. ONly thing is the binary number printed will be in reverse representation.

This also can be solved by using the recursion and printing the value post-recursion.
*/
void tobinary(int n){
    if(n == 0){
        return ;
    }

    tobinary(n>>1);

    cout<<(n&1);
}

int main() {
    int n;

    cin>>n;

    tobinary(n);

    return 0;
}


/*
Limitations to the above approach : 
The most greatest int we can store is pow(2,64)-1 that too in a long long int bucket i.e as high as 10^18.
but for higher numbers than this we must rely on arrays or strings.
*/