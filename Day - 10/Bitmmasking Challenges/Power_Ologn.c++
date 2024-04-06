/*
problem : Take as input x and n, two numbers. Write a function to calculate x raise to power n. Target complexity is O(logn).
NOTE: Try both recursive and bitmasking approach.

Input Format
Enter the number N and its power P

Constraints
None

Output Format
Display N^P

Sample Input
2
3
Sample Output
8
*/

/*
Brute force approach will be : 
    for(int i = 2; i <= power; i++){
        ans = ans*number;
    }...................................Time complexity for this will be O(n);
*/

#include <iostream>
using namespace std;

int main() {
    int n, p, ans;

    cin>>n>>p;

    /*
    Brute force approach : 
        ans = n;
        for(int i = 2; i<=p; i++){
            ans = ans*n;
        }
        cout<<ans<<"\n";
    */

    return 0;
}