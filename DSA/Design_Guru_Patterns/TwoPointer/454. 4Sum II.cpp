#include<iostream>
#include<vector>
using namespace std;



/* 
Given four integer arrays nums1, nums2, nums3, and nums4 all
of length n, return the number of tuples (i, j, k, l) such that:

0 <= i, j, k, l < n
nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0
 

Example 1:

Input: nums1 = [1,2], nums2 = [-2,-1], nums3 = [-1,2], nums4 = [0,2]
Output: 2
Explanation:
The two tuples are:
1. (0, 0, 0, 1) -> nums1[0] + nums2[0] + nums3[0] + nums4[1] = 1 + (-2) + (-1) + 2 = 0
2. (1, 1, 0, 0) -> nums1[1] + nums2[1] + nums3[0] + nums4[0] = 2 + (-1) + (-1) + 0 = 0
Example 2:

Input: nums1 = [0], nums2 = [0], nums3 = [0], nums4 = [0]
Output: 1
 
 */
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n=nums1.size();
        unordered_map<int,int>mp;
        int count=0;
        for(auto it:nums3){
            for(auto i:nums4){
                mp[it + i]++;
            }
        }
        // brute force ->> now optimized 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum=nums1[i]+nums2[j];
                count+=mp[-sum];
    
            }
        }
        
        return count;

        
    }
};