#include<iostream>
using namespace std;

int main(){
    int arr[] = {3, 2, 1, 5 , 4};
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}