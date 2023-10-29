#include<iostream>
#include<vector>
using namespace std;


/* Given an integer array nums, you need to find one continuous subarray such that if you only sort this subarray in non-decreasing order, then the whole array will be sorted in non-decreasing order.

Return the shortest such subarray and output its length.

 

Example 1:

Input: nums = [2,6,4,8,10,9,15]
Output: 5
Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.
Example 2:

Input: nums = [1,2,3,4]
Output: 0
Example 3:

Input: nums = [1]
Output: 0 */


class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        

        int maxi=INT_MIN;
        int index=0,n=nums.size();
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            if(nums[i]<maxi) index=i;
        }

       
        int mini=INT_MAX;
        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            if(nums[i]>mini) index2=i;
        }
        int subarray=index-index2;
        if(subarray>0) return subarray+1;
        return 0;
    }
};