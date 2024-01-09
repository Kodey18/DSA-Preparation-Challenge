/*
taking input using cin has it's own limitations(cin cannot take input of white spaces and new lines but suppose we do want to take that too as an input) for that we must use cin.get() method.
*/

#include <iostream>
using namespace std;

void readtString(char a[], char delimeter){
    char ch = cin.get();

    int i = 0;
    while(ch != delimeter){
        a[i] = ch;
        i++;
        ch = cin.get();
    }
    // in the end finishing the string with null char "/0";
    a[i] = '\0';
}


int main() {
    char arr[100];

    readtString(arr, '\n');

    cout<<"string is : "<<arr;

    return 0;
}