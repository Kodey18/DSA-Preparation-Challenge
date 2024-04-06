/*
problem : 
Peter wants to generate some prime numbers for his cryptosystem. Help him! Your task is to generate all prime numbers between two given numbers!

Input
The input begins with the number t of test cases in a single line (t<=10). In each of the next t lines there are two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.

Output
For every test case print all prime numbers p such that m <= p <= n, one number per line, test cases separated by an empty line.

Example
Input:
2
1 10
3 5

Output:
2 3 5 7

3 5

Warning: large Input/Output data, be careful with certain languages (though most should be OK if the algorithm is well designed)
*/

/*
The challenge for this question is that the range is is large that is >= 10^8. if this was the question for checking the if the number is prime then it could be solved by using the concept of root(n) but here we have to find the prime numbers in that range so we can't make prime sieve array with range greater than 10^7.
*/

/*
To solve this problem we will use the concept of segmented Prime Sieve concept.
*/

#include <iostream>
#include <vector>
using namespace std;

const int N = 100000;
vector<int> primes; // this vector will contain all the prime numbers between 2 and 100000;
int p[N] = {1}; // marking all numbers as prime initially.

void Sieve(){
    for(int i = 2; i <= N; i++){
        if(p[i] == 1){
            primes.push_back(i);
            // marking all the multiples of i as not primes.
            for(long long j = (i*i); j<=N; j+=i){
                p[j] = 0;
            }
        }
    }
}

int main() {
    Sieve(); //building sieve once for all the test cases.

    int t, a, b;

    cin>>t;

    while(t--){
        cin>>a>>b;

        bool *segment = new bool[a-b+1];
        // marking all as primes.
        for(int i = 0; i < a-b+1; i++){
            segment[i] = 1;
        }

        for(int i = 0; i < primes.size(); i++){
            if(pow(primes[i],2) > a){
                break;
            }

            int start = (b/primes[i])*primes[i];

            // mark all the multiples of primes[i] in range start to n as not primes.
            for(int j = start; j <= a; j+=primes[i]){
                segment[j-b] = 0; 
            }
        }
    }
    
    return 0;
}
