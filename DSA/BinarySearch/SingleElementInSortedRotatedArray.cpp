#include<iostream>
#include<vector>
using namespace std;


/* 

 All element appears twice except one 

 */


int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        // apply binary search 

        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];

        int low=1,high=n-2;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) return nums[mid];
            // now i have to move to the
            if((mid%2==0 && nums[mid]==nums[mid-1])|| (mid%2!=0 && nums[mid]==nums[mid+1])){
                high=mid-1;
            }
            else low=mid+1;
        }
        return -1;
        
        
    }


