/*
Problem : Remove duplicates from the string.

sample input : ccoodddiinnnnngg

sample output : coding.
*/
#include <iostream>
#include <cstring>
using namespace std;

void remove_duplicate(char a[]){
    int len = strlen(a);

    int i = 0, j = 1;
    while(j < len){
        if(a[i] != a[j]){
            i++;
            a[i] = a[j];
            j++;
        } else{
            j++;
        }
    }
    a[i+1] = '\0';

    return;
}
int main() {
    char arr[1000];

    cin.getline(arr, 1000);

    remove_duplicate(arr);

    cout<<arr;

    return 0;
}