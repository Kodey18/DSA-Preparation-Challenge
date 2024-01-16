#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Syntax vector<datatype> vector();
    vector<int> vec(5, 10); // vector vec with 5 values each equal to 10.

    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }

    int n, x;
    cin>>n;

    // inpput in vector.
    cout<<"insert : \n";
    for(int i = 0; i < n; i++){
        cin>>x;
        vec.push_back(x);
    }

    // remving last element in O(1) time.
    vec.pop_back();

    // inserting element in vector
    vec.insert(vec.begin() + 3, 100); // from the begin() after three positions we'll get 100 inserted.

    vec.insert(vec.begin() + 3, 4, 100); // begin() plus 3 from this position insert 4 100s.

    vec.erase(vec.begin() + 2); // erase a single element from given position.

    vec.erase(vec.begin() + 1, vec.begin() + 3); // erasing the element in the given range.

    cout<<vec.size(); // provides the number of element in now.

    cout<<vec.capacity(); // this will provide us with  highest number of elements inserted til now after declaration.

    return 0;
}