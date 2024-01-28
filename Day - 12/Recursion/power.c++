#include <iostream>
using namespace std;

int power(int a, int n){
    if(n == 0){
        return 1;
    }

    int smallAns = a*power(a, n-1);

    return smallAns;
}

int main() {
    int n, a;

    cin>>a>>n;

    cout<<"pow("<<a<<", "<<n<<") = "<<power(a, n);
    
    return 0;
}