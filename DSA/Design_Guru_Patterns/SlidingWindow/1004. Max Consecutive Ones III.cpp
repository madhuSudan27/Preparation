/* 
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

 

Example 1:

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
Example 2:

Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
 */



class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         int ans=0,n=nums.size(),i=0,j=0,zero=0;
        while(j<n){
            if(nums[j]==0) zero++;
            // if(zero<=k) // then there is a possibility to make a  consecutive array
            if(zero<=k) ans=max(ans,j-i+1);
            while(i<n && zero>k){
                if(nums[i]==0){
                    zero--;
                }
                i++;
            }
            j++;
        }
        return ans;
        
    }
};