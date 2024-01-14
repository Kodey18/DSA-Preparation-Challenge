/*
IEEE is having its AGM next week and the president wants to serve cheese prata after the meeting. The subcommittee members are asked to go to food connection and get P (P<=1000) pratas packed for the function. The stall has L cooks (L<=50) and each cook has a rank R (1<=R<=8). A cook with a rank R can cook 1 prata in the first R minutes 1 more prata in the next 2R minutes, 1 more prata in 3R minutes and so on (he can only cook a complete prata) (For example if a cook is ranked 2, he will cook one prata in 2 minutes one more prata in the next 4 mins an one more in the next 6 minutes hence in total 12 minutes he cooks 3 pratas in 13 minutes also he can cook only 3 pratas as he does not have enough time for the 4th prata). The webmaster wants to know the minimum time to get the order done. Please write a program to help him out.

Input
The first line tells the number of test cases. Each test case consist of 2 lines. In the first line of the test case we have P the number of prata ordered. In the next line the first integer denotes the number of cooks L and L integers follow in the same line each denoting the rank of a cook.

Output
Print an integer which tells the number of minutes needed to get the order done.

Example
Input:
3
10
4 1 2 3 4
8
1 1
8
8 1 1 1 1 1 1 1 1

Output:
12
36
1
*/

/*
Explanation :
We need to  output the minimum number of minutes that wll be required for cooking P prata. So for this our search space is going to be from 0 time to time taken by the highest ranked cook.suppose for these 1 2 3 4 cooks the minimum time required will be in range of 0 to time taken by cook with rank 1.
*/

#include <iostream>
using namespace std;

bool ifPossible(int cooks[], int l, int p, int min_time){
    int pcount, pt = 0;
    for(int i = 0; i < l; i++){
        int time = 0;
        pcount = 1;
        /*
        Below loop is checking how many prats can be cooked in the min_time.
        */
        while((time + pcount*cooks[i]) <= min_time){
            time = time + pcount*cooks[i];
            pcount++;
            // pt is total pratas cooked till now.
            pt++;
            if(pt >= p){
                return true;
            }
        }
    }
    return false;
}

int findTime(int cooks[], int p, int l){
    // minimum time required by the highest ranking cook
    int s = 1, e, ans = -1;
    p == 1 ? e = 1 : e = cooks[l-1] * ((p * (p-1))/2);

    while(s <= e){
        int mid = (s+e)/2;

        /*
        below function checks that if it possible to cook p prata in the mid amount of time and if yes then it will also be possible for more then mid amoiunt of time and as we want to find the minimum time required therefore we'll move towards left sub array and check if it can be done in less then mid amount of time.
        */
        if(ifPossible(cooks, l, p, mid)){
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return ans;
}

int main() {
    int t, p, l, cooks[50];

    cin>>t;

    while(t--){
        cin>>p>>l;

        for(int i = 0; i < l; i++){
            cin>>cooks[i];
        }

        cout<<findTime(cooks, p, l)<<"\n";
    }

    return 0;
}