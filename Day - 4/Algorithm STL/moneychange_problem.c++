/*
currency[] = {1, 2, 5, 10, 20, 50, 100, 200, 500};
problem : an array is given that contains indian denomination.An amount is given and for that we have to give the equivalent currency in minimum denomination possible(currency is unlimited and can be used multiple times).

sample input : 
Amt = 25
sample output : 
20 5

explanation : minimu denomination possible equivalend to amt 25 is 20 and 5.
*/

#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a <= b;
}

int main() {
    int currency[] = {1, 2, 5, 10, 20, 50, 100, 200, 500};
    int amt, n = sizeof(currency)/sizeof(int);

    cin>>amt;

    while(amt){
        int ans = lower_bound(currency, currency+n, amt, compare) - currency - 1;
        cout<<currency[ans]<<" ";
        amt = amt - currency[ans];
    }

    return 0;
}