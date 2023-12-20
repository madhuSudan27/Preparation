#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* 
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.

 

Example 1:

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
Example 2:

Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).
 */

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // closest difference 
        int ans=-1;
        int n=nums.size(),diff=INT_MAX;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             int sum=(nums[i]+nums[j]+nums[k]);
        //             if(diff>abs(sum-target)){
        //                 ans=sum;
        //                 diff=abs(sum-target);
        //             }
        //         }
        //     }
        // }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int low=i+1,high=n-1;
            while(low<high){
                int sum=nums[low]+nums[high]+nums[i];
                if(diff>abs(sum-target)){
                    ans=sum;
                    diff=abs(sum-target);
                }
                if(sum>target) high--;
                else low++;
                 
            }
        }
        return ans;
    }
};

