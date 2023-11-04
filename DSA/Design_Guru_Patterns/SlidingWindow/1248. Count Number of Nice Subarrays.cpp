//
// This Problem is simmilar to 930 (Binary Subarry)

//  Given an array of integers nums and an integer k. A continuous subarray is called nice if there are k odd numbers on it.

// Return the number of nice sub-arrays.

 

// Example 1:

// Input: nums = [1,1,2,1,1], k = 3
// Output: 2
// Explanation: The only sub-arrays with 3 odd numbers are [1,1,2,1] and [1,2,1,1].
// Example 2:

// Input: nums = [2,4,6], k = 1
// Output: 0
// Explanation: There is no odd numbers in the array.
// Example 3:

// Input: nums = [2,2,2,1,2,2,1,2,2,2], k = 2
// Output: 16



// **** approach *****


// we can use extra space and convert odd to 0 and even to 1 
// then use the prefix sum technique to solve 

// another *** better approach <-- count all the  subarray having oddCount<=k 
// and   count  all  the subarray having oddCount< k( which is k-1);
// then we can easily  solve like :-  930  

 #include<iostream>
 #include<vector>
 #include<unordered_map>
 using namespace std;
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>dummy(n);
        int i=0,j=0,sum=0,ans=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0) dummy[i]=1;
        }

        for(int i=0;i<n;i++){
            sum+=dummy[i];
            if(mp.find(sum-k)!=mp.end()){
                ans+=mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;
        
    }
};
