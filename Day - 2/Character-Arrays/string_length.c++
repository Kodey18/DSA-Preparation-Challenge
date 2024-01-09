#include <iostream>
using namespace std;

int lenght(char arr[]){
    int i;
    for(i = 0; arr[i] != '\0'; i++){
    }

    return i;
}

int main() {
    // size is 1000
    char arr[1000];

    cin.getline(arr, 1000);

    cout<<"lenght of the char array is : "<<lenght(arr);
    
    return 0;
}