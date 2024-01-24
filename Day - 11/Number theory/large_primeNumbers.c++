/*
checking lage number(> 10^10) given is prime or not. Using seive we can only check upto 10^7.
*/

#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

bitset<10000005> b;
const int n = 10000000; // Number till which we can calculate prime sieve.
vector<int> prime;

// Below function creates the prime sieve.
void Sieve(){
    // setting all numbers to prime.
    b.set();

    b[0] = b[1] = 0;

    for(long long int i = 2; i <= n; i++){
        if(b[i]){
            prime.push_back(i);
            for(long long int j = (i*i); j <= n; j+=i){
                b[j] = 0;
            }
        }
    }
}

bool isPrime(long long int x){
    cout<<"here1\n";
    if(x <= n){
        cout<<b[x]<<"\n";
        return ((b[x] == 1 )? true : false);
    }

    cout<<"here2\n";

    /*
            Here we are using the concept of check in the range 2 to root(n) for number n and if found any divsor in this range then it is observed that there will be divisor in root(n) to n range.
            As we already know how to calculate the prime numbers till range <=10^7 this means that we can also check if the number i prime or not for the 10^7 <= range <= 10^14 as the range 10^7 follows the root(n) observation rule.
        */  
    if(x >= 2){
        /*
        Rather than checking the whole numbers from 2 to root(n) as we have found the prime numbers we can check all the prime numbers in range 2 to root(n) instead making iteration time shorter.

        for(long long int j = 2; (j*j) <= x; j++){
            if((x % j) == 0){
                cout<<j<<"\n";
                return false;
            }
        }
        return true;
        */

        for(int i = 0; i < prime.size(); i++){
            if((x%prime[i]) == 0){
                return false;
            }
        }
        return true;    
    }
}

int main() {
    long long int lnumber;

    cin>>lnumber;
    Sieve();

    if(isPrime(lnumber)){
        cout<<"The number "<<lnumber<<" is a prime number."<<endl;
    } else {
        cout<<"The number "<<lnumber<<" is not a prime number."<<endl;
    }
    
    return 0;
}