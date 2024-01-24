/*
Problem : 

PMO gives two random numbers a & b to the Prime Minister. PM Modi wants to visit all countries between a and b (inclusive) , However due to shortage of time he can’t visit each and every country , So PM Modi decides to visit only those countries,for which country number has two divisors. So your task is to find number of countries Mr. Modi will visit.

Input Format:
The first line contains N , no of test cases. The next lines contain two integers a and b denoting the range of country numbers.

Constraints:
a<=1000000 & b<=1000000.
N<=1000

Output Format:
Output contains N lines each containing an answer for the test case.

Sample Input:
2
1 10
11 20
Sample Output:
4
4

*/

/*
the most optmised solution will be o find the prime sieve for getting the prime numbers in raange but Most common mistake that is made in this question is that for every query(test case n where n <= 1000) prime sieve is calculated and suppose the time required for prime sieve calculation is linear 10^6 and for n <= 1000 test cases the maximum time will be 10^6*10^3 = 10^9(TLE). 
Therefore simple solution to this will be that precompute the prime sieve for range 1 to 1000000 and then use is for all the quries.
*/

#include <iostream>
using namespace std;

void primeSieve(int *p){
    // marking all odd number to be prime
    for(int i = 3; i <= 1000000; i+=2){
        p[i] = 1;
    }

    for(long long i = 3; i <= 1000000; i++){
        if(p[i] == 1){
            for(long long j = (i*i); j <= 1000000; j+=i){
                p[j] = 0;
            }
        }
    }

    p[2] = 1;
    p[0] = p[1] = 0;
}

int main() {
    int t, a, b;
    int *p= new int[1000000]{0};

    // precalculating prime sieves.
    primeSieve(p);

    cin>>t;
    while(t--){
        cin>>a>>b;

        for(int i = a; i <= b; i++){
            if(p[i] == 1){
                cout<<i<<" ";
            }
        }
        cout<<"\n";
    }

    delete [] p;

    return 0;
}