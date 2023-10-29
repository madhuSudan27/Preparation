#include<iostream>
#include<vector>
using namespace std;


/* 
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
*/


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<=n-3;i++){
            if(nums[i]>0 ) break;// we cant make any triplate 
            if( i>0 && nums[i]==nums[i-1]) continue;
            // now i have to find the other  element in the array ;
            int low=i+1,high=n-1;
            while(low<high){
                int sum=(nums[low]+nums[high]+nums[i]);
                if(sum==0) {
                    ans.push_back({nums[i],nums[low],nums[high]});
                    // have to also make sure that i will not make any duplicate further 
                    int lowIndex=low;
                    while(low<high && nums[low]==nums[lowIndex]) low++;
                    high--;
                }
                else if(sum>0) high--;
                else low++;
               
            }
        }
        return ans;
        
    }
};
