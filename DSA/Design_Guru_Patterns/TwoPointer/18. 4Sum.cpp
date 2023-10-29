#include<iostream>
#include<vector>
using namespace std;

/* 

Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

 

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]

 */

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        int n=nums.size();
        if(n<4) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long  sum=nums[i]+nums[j];
                // now i need to find the target-sum value

                long long  currTarget=target-sum; 
                int low=j+1,high=n-1;
                while(low<high){
                    long long currSum=sum+nums[low]+nums[high];
                    if(currSum==target){
                        ans.push_back({nums[i],nums[j],nums[low],nums[high]});
                        // need to remove duplicate ;
                       
                        high--;
                        int value=low;
                        while(low<n && nums[low]==nums[value]) low++;
                    }
                    else  if(currSum>target) high--;
                    else low++;
                }
                // remove duplicate 
                while(j+1<n && nums[j]==nums[j+1]) j++;

            }
            // remove duplicate 
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }

        return ans;
        
    }
};
