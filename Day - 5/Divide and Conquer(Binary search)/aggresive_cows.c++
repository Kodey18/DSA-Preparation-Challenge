/*
Given an array of length ‘N’, where each element denotes the position of a stall. Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance.

constriants : 
2 <= N <= 100,000
2 <= C <= 100,000
the stalls are located in a straight line at positions x1,.......,xn(0 <= xi <= 1,000,000,000);

sample input :
1(test cases)
5 3 (N and C)
1
4
2
8
9
*/

#include <iostream>
#include <algorithm>
using namespace std;

/*
explanation : 
For the problem where something has to be arranged in a certain range or something has to be found then think the monotonic search space approah that uses the binary search.

For this question cows are to be placed such that the minimum distance between cows should be maximum. Now for sample input our search space will be from 1 to 9 and keeping cows at both end will give us the distance of (9-1) = 8 between cows. Now let go to the middle(4) now check that if it is possible to keep the cows with the distance 4 between them if yes then we'll check the range of 4 to 9 for another possible distance cuz we have to maximise it. suppose keep 4 as distance is not possible then none of the distance in range 4 to 9 will be possible so we'll look for distances in range 1 to 4. 
*/
bool ispossible(int a[], int min_sep, int n, int c){
    /*
    This function checks if it is possible to keep the cows at the provided min_seperation distance.
    */

    int last_cow = a[0];
    // one cow already kepy at start stall.
    c = c - 1;

    for(int j = 1; j < n; j++){
        if((a[j] - last_cow) >= min_sep){
            last_cow = a[j];
            c--;
            if(c == 0){
                return true;
            }
        }
    }
    
    return false;
}


int minimum_dist(int a[], int n, int c){
    //initialize variables
    int s = 0, e = n - 1, ans = -1;
    
    while(s <= e){
        int mid = (s+e)/2;
        if(ispossible(a, (a[mid]-a[0]), n, c)) {
            ans = (a[mid] - a[0]);
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
} 

int main() {
    int t, n, c;

    cin>>t;

    while(t--){
        cin>>n>>c;

        int *stalls = new int[n];

        for(int i = 0; i < n; i++){
            cin>>stalls[i];
        }

        cout<<"dist : "<<minimum_dist(stalls, n, c)<<endl;

        delete [] stalls;
    }
    
    return 0;
}