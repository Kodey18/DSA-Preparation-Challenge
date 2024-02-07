/*
WAP to replace akeyword with its given value.
eg : 
input : axpiaepiaf
output : ax3.14ae3.14af
In this example the keyword is pi and the value for its replacement is 3.14.
*/

/*
C++ string Function
1 -> replace()
2 -> compare()
3 -> 
*/

#include <iostream>
using namespace std;

// Recursion Approch

int main() {
    string s, key = "pi", value = "3.14", ans = "";

    cin>>s;

    /*
    Iterative approach for replacing key in O(n) time.
    
        // Replace(&s, key, value, 0, &ans);
        for(int i = 0; i < s.length();){
            if(s[i] == key[0]){
                if(key == s.substr(i, key.length())){
                    ans.append(value);
                    i = i + key.length();
                } else {
                    ans += s[i];
                    i++;
                }
            } else {
                ans += s[i];
                i++;
            }
        }
    */

    cout<<ans<<endl;

    return 0;
}