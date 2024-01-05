/*
Find a pair of values suuch that their sum is eqal to the target given. Provided that array is sorted.
Two-pointer problem.
*/

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 4, 7, 8, 10, 13, 19, 21};
    int n = sizeof(arr)/sizeof(int), i, j;

    int target = 11;

    for(i = 0, j = n-1; i < j;){
        if((arr[i] + arr[j]) == target){
            cout << "Pair found : "<<arr[i]<<" and "<<arr[j]<<endl;
            i++;
            j--;
        }
        // if sum is less then target means increase the sum by going right in array.
        else if((arr[i] + arr[j]) < target){
            i++;
        }
        // if sum is greater then target means decrease the sum by going left in array.
        else{
            j--;
        }
    }

    return 0;
}