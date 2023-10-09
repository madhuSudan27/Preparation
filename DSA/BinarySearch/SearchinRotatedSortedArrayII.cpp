#include<iostream>
#include<vector>
using namespace std;

// a very good problem 

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            if(nums[low]==nums[mid]==nums[high]){
                low++;
                high--;
                continue;
            }
            if(nums[low]<=nums[mid]){
                if(nums[mid]>=target && nums[mid]<=target){
                    high=mid-1;
                }
                else{
                    low=high+1;
                }
            }
            else{
                if(nums[mid]<=target && nums[high]>=target){
                    low=mid+1;
                } 
                else{
                    high=mid-1;
                }
            }
        }
        return 0;
        
    }
};