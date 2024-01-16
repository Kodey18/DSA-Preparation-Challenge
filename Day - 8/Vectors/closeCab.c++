#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool closestDistance(pair<int, int> a, pair<int, int> b){
    return (abs(a.first) + abs(a.second)) < (abs(b.first) + abs(b.second)); 
}

int main() {
    vector<pair<int,int>> vec;

    int x, y, n;

    cin>>n;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        vec.push_back(make_pair(x,y));
    }

    sort(vec.begin(), vec.end(), closestDistance);

    cout<<"Closest cab is : "<<vec[0].first<<", "<<vec[0].second;

    return 0;
}