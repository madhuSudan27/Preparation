#include<iostream>
#include<vector>
using namespace std;


/* 


Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

Return the minimized largest sum of the split.

A subarray is a contiguous part of the array.

 

Example 1:

Input: nums = [7,2,5,10,8], k = 2
Output: 18
Explanation: There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8], where the largest sum among the two subarrays is only 18.
Example 2:

Input: nums = [1,2,3,4,5], k = 2
Output: 9
Explanation: There are four ways to split nums into two subarrays.
The best way is to split it into [1,2,3] and [4,5], where the largest sum among the two subarrays is only 9. */




class Solution {
public:

    bool isPossible(vector<int>& nums, int sum, int k){
        int currSum=0;
        int count=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>sum) return 0;
            if(currSum+nums[i]>sum){
                count++;
                currSum=nums[i];
            }
            else{
                currSum+=nums[i];
            }
        }
        return count<=k;
    }
    int splitArray(vector<int>& nums, int m) {

        int n=nums.size();
        int sum=0,ans=0;
        for(auto it:nums) sum+=it;
        if(n<m) return -1;

        int low=0,high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            cout<<mid<<" ";
            if(isPossible(nums,mid,m)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }

        return ans;
        
    }
};

