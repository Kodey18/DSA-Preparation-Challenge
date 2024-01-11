/*
monotonic functions are bsicaaly functions that non-decreasing(means going to increase always) or non increasing(means going decrease allways) in nature. Basically this is important for undertanding the search spaces. Suppose sqare root(int/floor value) has to be found without using inbuilt function then there must exist a search space in which our answer will lie.

Now suppose it's square root means its a monotonic function that is always non-increasing
*/
#include <iostream>
using namespace std;

/*
logic : for a number n it's sqr root for sure lies between 0 to n. so using binary search if the square of the mid is equal to n then sqr root found, if greater then move to the left sub-array or if smaller then move to the right sub-array.
*/
int sqr_root(int n){
    int s = 0, e = n;
    int ans = -1;

    while(s <= e){
        int mid = (s + e) / 2;
        int midsqr = (mid*mid);
        if(midsqr == n){
            ans = mid;
            return ans;
        } else if(midsqr > n){
            e = mid - 1;
        } else {
            ans = mid;
            s = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n;

    cin>>n;

    cout<<"Square root(closest) : "<<sqr_root(n);

    return 0;
}