/*
Andrew was attempting a mathematics test where he needed to solve problems with factorials. One such problem had an answer which equaled 100! ,He wondered what would this number look like. He tried to calculate 100! On his scientific calculator but failed to get a correct answer. Can you write a code to help Andrew calculate factorials of such large numbers?

Input Format
a single lined integer N

Constraints
1 < = N < = 500

Output Format
Print the factorial of N

Sample Input
5
Sample Output
120

Explanation
for factorial of 5 we have 5 x 4 x 3 x 2 x 1 = 120
*/



#include <iostream>
#define max 3000
using namespace std;

int multiply(int i, int res[], int size){
    int carry = 0;

    for(int j = 0; j < size; j++){
        int prod = res[j] * i + carry;
        res[j] = prod % 10;
        carry = prod / 10;
    }

    while(carry){
        res[size] = carry%10;
        carry = carry / 10;
        size++;
    }

    return size;
}

void factorial(int n){
    int res[max], res_size;

    res[0] = 1;
    res_size = 1;

    for(int i = 2; i <= n; i++){
        res_size = multiply(i, res, res_size);
    }

    cout<<"size : "<<res_size<<", Factorial of the number "<<n<<" is : ";
    for(int i = res_size-1; i >= 0; i--){
        cout<<res[i];
    }
}
int main() {
    int n;

    cin>>n;

    factorial(n);

    return 0;
}