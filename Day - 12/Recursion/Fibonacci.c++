/*
Fibonacci number is sum of previous two numbers.
(fibonacci series)0 1 1 2 3 5 8 13 21.........
*/

#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }

    int smallans1 = fibonacci(n - 1);
    int smallans2 = fibonacci(n - 2);

    return (smallans1 + smallans2);
}

int main() {
    // n i the nth fibonacci number to found. f1 and f2 are the frist inital fibonacci numbers.
    int n;

    cin>>n;

    cout<<n<<"th fibonaaci number is  : "<<fibonacci(n);
    return 0;
}