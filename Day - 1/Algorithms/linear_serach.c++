#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,5,8,9,12,14};
    int key = 12;
    int i;

    for(i = 0; i < 6; i++){
        if(arr[i] == key){
            cout<<"Key was found at index : "<<i<<endl;
            break;
        }
    }

    // i == 6 is case when break statement did not executed and the code flow reached here due to the termination of the loop.
    if(i == 6){
        cout<<"Key was not found in array.";
    }

    return 0;
}