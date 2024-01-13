/*
Given an array of integers A of size N and an integer B.

The College library has N books. The ith book has A[i] number of pages.

You have to allocate books to B number of students so that the maximum number of pages allocated to a student is minimum.

A book will be allocated to exactly one student.
Each student has to be allocated at least one book.
Allotment should be in contiguous order, for example: A student cannot be allocated book 1 and book 3, skipping book 2.
Calculate and return that minimum possible number.

NOTE: Return -1 if a valid assignment is not possible.



Problem Constraints
1 <= N <= 105
1 <= A[i], B <= 105



Input Format
The first argument given is the integer array A.
The second argument given is the integer B.



Output Format
Return that minimum possible number.



Example Input
Input 1:
A = [12, 34, 67, 90]
B = 2
Input 2:
A = [5, 17, 100, 11]
B = 4


Example Output
Output 1:
113
Output 2:
100


Example Explanation
Explanation 1:
There are two students. Books can be distributed in following fashion : 
1)  [12] and [34, 67, 90]
    Max number of pages is allocated to student 2 with 34 + 67 + 90 = 191 pages
2)  [12, 34] and [67, 90]
    Max number of pages is allocated to student 2 with 67 + 90 = 157 pages 
3)  [12, 34, 67] and [90]
    Max number of pages is allocated to student 1 with 12 + 34 + 67 = 113 pages
    Of the 3 cases, Option 3 has the minimum pages = 113.


*/


#include <iostream>
#include <climits>
using namespace std;

bool isPossible(int arr[], int n, int s, int mid){

    int curr_pages = 0, students = 1;
    for(int i = 0; i < n; i++){
        if(curr_pages + arr[i] > mid){
            students++;
            curr_pages = arr[i];
            if(students > s){
                return false;
            }
        } else {
            curr_pages = curr_pages + arr[i];
        }
    }

    return true;
}

int findpages(int arr[], int n, int b){
    if(n < b){
        return -1;
    }
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }


    int s = arr[n-1], e = sum, ans = INT_MAX;

    while(s <= e){
        int mid = (s+e)/2;

        if(isPossible(arr, n, b, mid)){
            ans = min(ans, mid);
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return ans;
}


/*
we have to give answer in terms of number of pages therefore our search space is going to be in terms of number of pages only. for books array[] = {10, 20, 30, 40} our search space is going to be in range of 40 to 100(40 is the maximum number of pages a student will read in case of 4 students and 100(10+20+30+40) in case of 1 student).
*/
int main() {
    int books[105], n, b;

    cin>>n>>b;

    // note that array should be sorted.
    for(int i = 0; i < n; i++){
        cin>>books[i];
    }

    cout<<findpages(books, n, b);
    
    return 0;
}