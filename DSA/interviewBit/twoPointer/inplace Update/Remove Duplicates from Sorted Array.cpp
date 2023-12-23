#include<iostream>
#include<vector>
using namespace std;

/* 
Given a sorted array A consisting of duplicate elements.

Your task is to remove all the duplicates and return the length of the sorted array of distinct
elements consisting of all distinct elements present in A.

Note: You need to update the elements of array A by removing all the duplicates
*/

int Solution(vector<int> &arr) {
    int n = arr.size();
    if(n == 1) return 1;
    int j=0;
    for( int i =  1;i < n; i++){
        if(arr[j] != arr[i]){
            arr[++j] = arr[i];
        }
    }
    return j+1;
}

int main()
{
    return 0;
}