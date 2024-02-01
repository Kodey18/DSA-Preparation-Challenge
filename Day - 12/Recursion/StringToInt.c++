/*
WAP to convert a string to integer.
eg : string = "4321" -> int = 4321.
*/

#include <iostream>
#include <string>
using namespace std;

int stringToInt(string n, int i){
    // Base case: if the number is single digit return that digit's value
    if(i == 0){
        return (n[i] - '0');
    }

    int smallans = stringToInt(n, i-1);

    return  smallans * 10 + (n[i] - '0');
}

int main() {
    string number;

    cin>>number;

    int ans = stringToInt(number, (number.length()-1));
    cout<<ans<<"\t"<<sizeof(ans);

    return 0;
}