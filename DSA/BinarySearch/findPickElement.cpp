#include<iostream>
#include<vector>
using namespace std;



//852. Peak Index in a MountainArray <- simmilar problem 

int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=1,high=n-1;
        // base case 
        if(n==1) return 0;
        if(n==2){
            return nums[0]>nums[1]?0:1;
        }

        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        while(low<=high){

           int mid=(low+high)/2;
           if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
           if(nums[mid]<nums[mid+1]){
               low=mid+1;
           }
           else{
               high=mid-1;
           }
        }
        return -1;

       
    }