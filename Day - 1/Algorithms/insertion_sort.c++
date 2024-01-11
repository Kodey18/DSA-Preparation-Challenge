#include<iostream>
using namespace std;

int main(){
    int arr[] = {3, 2, 5, 1, 4};
    int n = sizeof(arr)/sizeof(int), j;

    for(int i = 1;i < n; i++){
        int pick_value = arr[i];
        for(j = i - 1; j >= 0 && arr[j] > pick_value;j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = pick_value;
    }

    cout<<"Sorted array is : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}