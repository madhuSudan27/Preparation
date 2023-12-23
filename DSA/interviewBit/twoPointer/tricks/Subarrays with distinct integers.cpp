#include<iostream>
#include<vector>
#include<map>
using namespace std;


/* 
Given an integer array nums and an integer k, return the number of good subarrays of nums.

A good array is an array where the number of different integers in that array is exactly k.

For example, [1,2,3,1,2] has 3 different integers: 1, 2, and 3.
A subarray is a contiguous part of an arr
 */

int solve(vector<int>& arr, int k){
    int n = arr.size();
    int i = 0, count = 0;
    map<int,int>countFrequency;
    
    for( int j = 0;j < n; j++){
        countFrequency[arr[j]]++;
        
        while(countFrequency.size() > k && i <= j){
            countFrequency[arr[i]]--;
            if(countFrequency[arr[i]] == 0){
                countFrequency.erase(arr[i]);
            }
            i++;
        }
        count += (j-i)+1;
      
    } 
    return count;
}




int main()
{
    return 0;
}