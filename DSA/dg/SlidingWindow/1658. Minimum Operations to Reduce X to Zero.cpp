#include<iostream>
 #include<vector>
 #include<unordered_map>
 using namespace std;

/* You are given an integer array nums and an integer x. In one operation, you can either remove the leftmost or the rightmost element from the array nums and subtract its value from x. Note that this modifies the array for future operations.

Return the minimum number of operations to reduce x to exactly 0 if it is possible, otherwise, return -1.

 

Example 1:

Input: nums = [1,1,4,2,3], x = 5
Output: 2
Explanation: The optimal solution is to remove the last two elements to reduce x to zero.
Example 2:

Input: nums = [5,6,7,8,9], x = 4
Output: -1
Example 3:

Input: nums = [3,2,20,1,1,3], x = 10
Output: 5
Explanation: The optimal solution is to remove the last three elements and the first two elements (5 operations in total) to reduce x to zero. */


class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int sum=0;
        for(auto it:nums) sum+=it;
        if(sum<x) return -1;
        int diff=sum-x;
        sum=0;
        int i=0,j=0,ans=INT_MAX;
        while(j<n){
            sum+=nums[j];
            if(sum==diff){
                ans=min(ans,(n-(j-i+1)));
            }
            while(i<n && sum>diff){
                sum-=nums[i++];
                if(sum==diff) ans=min(ans,(n-(j-i+1)));
            }
            j++;
        }

        return ans==INT_MAX?-1:ans;
    }
};