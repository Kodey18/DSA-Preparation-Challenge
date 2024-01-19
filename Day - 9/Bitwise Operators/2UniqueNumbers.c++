/*
problem : 2n+2 numbers are given where n numbers are repated and 2 numbers are unique. Wrirte a program to find the 2 uniue numbers.
*/

#include <iostream>
using namespace std;

/*
Brute force approach : 
1. start from the oth element and compare this ith element with the ith+1 to n-1 sub array. if another element of same value found means the number is not unique and if till the end of the loop no same element is found then the number is unique. increase the unique number count and check the condition that unique count <= 2.  
*/

int main() {
    int unq1, unq2, ans, pos, x;
    int arr[] = {6, 1, 5, 3, 1, 6}, n = sizeof(arr)/sizeof(int);

    /*
    doing xor operation with each number as xor of same number cancel each other out so in the end the ans will contain xor of two uniqe numbers.
    */
    ans = 0;
    for(int i = 0; i < n; i++){
        ans = (ans^arr[i]);
    }

    /*
    1. extract the bit position with value 1 in ans, means that bit position would be different in both unique numbers as the xor of different bit gives 1.
    */
    pos = 0, x = ans;
    while(x>0){
        if(x&1){
            break;
        }
        pos++;
        x = x>>1;
    }

    /*
    Doing the separations of the number such that 1 set should contain one unique number and other should contain the other one. This seperation will be based on position of 1 found in answer that means all the numbers in array having 1 at the position pos will be separated and xored.
    */

    x = (1<<pos), unq1 = 0;
    for(int i = 0; i < n; i++){
        if((x&arr[i]) == 0){
            unq1 ^= arr[i];
        }
    }

    /*
    as ans contains un1^unq2 already doing ans^unq1 will give you unq2 as the xor of same unmber cancels out the number.
    */
    unq2 = (ans^unq1);

    cout<<unq1<<" "<<unq2;
    
    return 0;
}