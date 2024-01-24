#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n <= 1){
        return false;
    }

    if(n == 2){
        return true;
    } else {
        for(int i = 2; (i*i) <= n; i++){
            if((n % i) == 0){
                return false;
            }
        }
    }

    return true;
}

void primeSieve(int *p){
    /*
    All even number are not prime there are to be skipped and initially all odd numbers are prime so they are to be marked prime i.e by 1.
    */
    for(int i = 3; i <= 1000000; i+=2){
        p[i] = 1;
    }

    // Sieve code
    for(long long i = 3; i <= 1000000; i+=2){
        // if current number is marked (it is prime)
        if(p[i] == 1){
            // mark all the multiples of i as not prime.
            for(long long j = i*i; j < 1000000; j+=i){
                p[j] = 0;
            }
        }
    }

    // special cases.
    p[2] = 1;
    p[1] = p[0] = 0;
}

int main() {
    int n;
    int p[1000005] = {0};

    cin>>n;

    primeSieve(p);

    for(int i = 0; i < 1000000; i++){
        if(p[i] == 1){
            cout<<i<<" ";
        }
    }
    
    return 0;
}