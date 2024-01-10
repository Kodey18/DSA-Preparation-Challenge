/*
Sorting the string lexographically.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;

    string s[100];
    cin.get(); // to ignore the nex line as input string. 

    for(int i = 0; i < n; i++){
        getline(cin, s[i]);
    }

    sort(s, s+n);

    /*
        For descending order sort

        bool compare(string x, string y){
            return x > y;
        }

        sort(s, s+n, compare);
    */

    /*
        suppose asked to sort the strings in decreasing order of their length and if the strings are of same size then those strings are to be sorted lexographically.

        bool comapre(string x, string y){
            if(x.lenght() == y.length()){
                return x < y;
            }

            return x.length() > y.length();
        }

        sort(s, s+n, compare);
    */

    for(int i = 0; i < n; i++){
        cout<<s[i]<<" ";
    }

    return 0;
}