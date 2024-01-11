/*
problem : Rahul has a sorted array of numbersand he was tasked with finding a number in that array. By mistake his friend rotated the array and rahul doesn.t has time to re-rotate it. Help him find the given number quickly.

input format : 
first line contain the size of the array then next line will have the n elements of the array and the last line will have the number that has to be founded.
*/

#include <iostream>
using namespace std;

int find_key(int a[], int n, int k){
    int s = 0, e = n - 1;

    /*
    By rotating the sorted array two sub sorted arrays are created.
    eg : [] = 1,2,3,4,5 -> 4,5,1,2,3 (4,5 one sorted sub array and 1,2,3 another sorted sub array).
    now initialising s = 0 and e = n-1 and mid = (s+e)/2. We don't know that our mid is in which sub sorted array so first we have to check that.
    */
    while(s <= e){
        int mid = (s+e)/2;
        if(a[mid] == k){
            return mid;
        } 
        /*
        
        */
        else if(a[s] <= a[mid]){
            if(k >= a[s] && k <= a[mid]){
                e = mid - 1;
            } else{
                s = mid + 1;
            }
        } else {
            if(k >= a[mid] && k <= a[e]){
                s = mid + 1;
            } else{
                e = mid - 1;
            }
        }
    }

    return -1;
}

int main() {

    return 0;
}