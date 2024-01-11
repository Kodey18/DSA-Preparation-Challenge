/*
This is a use case of binary search. the time complexity is less then using thr iterative approach.

Problem : 
Give an array of n elements(sorted), task is to find the first and the last occurence of an element in the array.
a[] = {1, 2, 5, 5, 8, 8, 8, 8, 8, 10, 12, 20, 25}

sample input : 
8
sample output : 
index 4(first occurence) and 7(last occurence) in the array.
*/

#include <iostream>
using namespace std;

int first_occur(int a[], int n, int key){
    int s = 0, e = n - 1, ans;

    ans = -1;
    while(s <= e){
        int mid = (s + e)/2;
        if(a[mid] == key){
            // update answer to current index
            ans = mid;
            e = mid - 1;
        } else if(a[mid] < key){
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}

int last_occur(int a[], int n, int key){
    int s = 0, e = n - 1, ans;

    ans = -1;
    while(s <= e){
        int mid = (s + e)/2;
        if(a[mid] == key){
            // update answer to current index
            ans = mid;
            s = mid + 1;
        } else if(a[mid] < key){
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}

int main() {
    int a[] = {1, 2, 5, 5, 8, 8, 8, 8, 8, 10, 12, 20, 25};
    int n = sizeof(a)/sizeof(int), key, fo, lo;

    cin>>key;

    fo = first_occur(a, n, key);
    if(fo != -1){
        lo = last_occur(a, n, key);

        cout<<"First occurence : "<<fo<<"\nLast Occurence : "<<lo<<"\n";
    } else {
        cout<<"Element is not present in the array."<<endl;
    }

    return 0;
}



/*
iterative approach(will work for sorted and unsorted array both) :
start iterating the array from start to end. Once we encounter the key element store the first index and increase the count for each new encounter. add the count with the first index to get the last occurence.

        pair<int,int> occurence(int a[], int n, key){
            int count = 0, flag = 0, strt_indx;
            for(int i = 0; i < n ; i++){
                if(key == a[i]){
                    count++;
                    if(flag == 0){
                        strt_indx = i;
                        flag = 1;
                    }
                }
            }

            return make_pair(strt_indx, strt_indx + count);
        }
*/