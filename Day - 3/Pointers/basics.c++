#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *y;
    y = &x;

    // thiss will give addr of x.
    cout<<&x<<endl;

    // addr of x.
    cout<<y<<"\n";

    // addr of pointer y
    cout<<&y<<"\n";

    // value 10 will be given.
    cout<<*(&x)<<"\n";

    // addr of x will be given.
    cout<<&(*y)<<"\n";

    // addr of next bucket to x will be given.
    cout<<&x + 1<<"\n";

    // addr of bucket next to x.
    cout<<y + 1<<"\n";

    // 11 will be given.
    cout<<*y + 1<<"\n";
    
    // addr of x will be given.
    cout<<*(&y)<<"\n";


    return 0;
}