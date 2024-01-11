/*
Find the largest value in the array.
*/

/*
this problem uses the concept of the linear search considering the most smallest value as the key and comparing it to all the values in the array updating itself for each larger value then it's current value.
*/

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {4, 1, 67, 5, 10};
    int j;

    int min = INT_MIN;

    for(int i = 0; i < 5; i++){
        if(arr[i] > min){
            min = arr[i];
            // j will be storiing the index where the largest value was found.
            j = i;
        }
    }

    cout<<"Largest number is : "<<min<<endl;

    return 0;
}