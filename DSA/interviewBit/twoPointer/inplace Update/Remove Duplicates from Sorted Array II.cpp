#include<iostream>
#include<vector>
using namespace std;

/* 
Remove Duplicates from the Sorted Array
Given a sorted array, remove the duplicates in place such that each element can appear atmost twice and return the new length.
Do not allocate extra space for another array, you must do this in place with constant memory.
Note that even though we want you to return the new length, make sure to change the original array as well in place
 */

int Solution(vector<int> &arr) {
    int n = arr.size();
    int prev1 = arr[0] , prev2 = arr[1];
    int index = 2;
    if(n <= 2) return n;
    for(int i=2;i<n;i++){
        
        // if not equal 
        bool check = 0;
        if(arr[i] != prev1 || arr[i] != prev2) check = 1;
        
        prev1 = prev2;
        prev2 = arr[i]; 
        if(check) arr[index++] = arr[i];
    }
    return index;
}

int main()
{
    return 0;
}