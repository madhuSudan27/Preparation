/* Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.

A subarray is a contiguous part of the array.

 

Example 1:

Input: nums = [1,0,1,0,1], goal = 2
Output: 4
Explanation: The 4 subarrays are bolded and underlined below:
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
Example 2:

Input: nums = [0,0,0,0,0], goal = 0
Output: 15
  */


#include<iostream>
 #include<vector>
 #include<string>
 #include<unordered_map>
 using namespace std;
 

 class Solution {
public:

    int subArrayCount(vector<int>& arr, int k){
        int n=arr.size();
        if(k<0) return 0;
        int i=0,j=0,ans=0,sum=0;
        while(i<n){
            sum+=arr[i];
            while(j<n && sum>k){
                sum-=arr[j++];
            }
            ans+=(i-j+1);
            i++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        /* 
        unordered_map<int,int>mp;
        int sum=0,ans=0;
        mp[0]=1;
        for(auto it:nums){
            sum+=it;
            if(mp.find(sum-goal)!=mp.end()){
                // present 
                ans+=mp[sum-goal];
            }
            mp[sum]++;
        }
        return ans;
 */
    // better approach 
    //find all subarray sum<=K and 
    // fins all sumbarray sum <k
    // then subtract it 
    // we can achieve it in O(n) and O(1) time complexity 

    return subArrayCount(nums,goal)-subArrayCount(nums,goal-1);


        
    }
};