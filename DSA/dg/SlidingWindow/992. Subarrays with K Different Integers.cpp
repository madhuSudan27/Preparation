#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


/* 

Given an integer array nums and an integer k, return the number of good subarrays of nums.

A good array is an array where the number of different integers in that array is exactly k.

For example, [1,2,3,1,2] has 3 different integers: 1, 2, and 3.
A subarray is a contiguous part of an array.

 

Example 1:

Input: nums = [1,2,1,2,3], k = 2
Output: 7
Explanation: Subarrays formed with exactly 2 different integers: [1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2]
Example 2:

Input: nums = [1,2,1,3,4], k = 3
Output: 3
Explanation: Subarrays formed with exactly 3 different integers: [1,2,1,3], [2,1,3], [1,3,4].
 */

class Solution {
public:

    int find(vector<int>&arr,int k){
        int i=0;int j=0;int ans=0;int n=arr.size();
        unordered_map<int,int>mp;
        while(j<n){
            mp[arr[j]]++;
            if(mp.size()>k){
                while(i<n && mp.size()>k){
                    mp[arr[i]]--;
                    if(mp[arr[i]]==0){
                        cout<<i<<" ";
                        mp.erase(arr[i]);
                    }
                    i++;
                }
                
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
        
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return find(nums, k)-find(nums,k-1);
    }
};