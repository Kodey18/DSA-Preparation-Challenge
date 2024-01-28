/*
For a given integer n eg : 2048 WAP to convert it to "two zero four eight";
*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string* toString(int d, string *s){
    switch (d)
    {
        case 1 :
        *s = " one"+(*s);
        break;

        case 2 : 
        *s = " two"+*s;
        break;

        case 3 :
        *s = " three"+*s;
        break;

        case 4 :
        *s = " four"+*s;
        break;

        case 5 :
        *s = " five"+*s;
        break;

        case 6 :
        *s = " six"+*s;
        break;

        case 7 :
        *s = " seven"+*s;
        break;

        case 8 :
        *s = " eigth"+*s;
        break;

        case 9 :
        *s = " nine"+*s;
        break;

        case 0 :
        *s = " zero"+*s;
        break;
    }
    return s;
}

void intToString(int n, string *s){
    if(n == 0){
        return;
    }

    int d =  n % 10; // get the rightmost digit of n
    s = toString(d, s);

    intToString(n/10, s);
}

/*
Another efficient way to write code is :

    string num[] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    void intToString(int n, string *s){
        if(n == 0){
            return;
        }

        int d =  n % 10; // get the rightmost digit of n
        s = num[d]+s;

        intToString(n/10, s);
    }

*/

int main() {
    int n; // Given number
    string res = ""; // To store the resultant string

    cin>>n;

    intToString(n, &res); // Convert the given integer to a string

    cout<<res;

    return 0;
}