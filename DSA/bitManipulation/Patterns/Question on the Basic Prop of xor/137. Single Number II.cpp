#include<iostream>
#include<vector>
using namespace std;

/* 

Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,3,2]
Output: 3
Example 2:

Input: nums = [0,1,0,1,0,1,99]
Output: 99

 */

 int singleNumber(vector<int>& nums) {
    // approach is count set bit 
    // if(setbitCount%3==0)<- means that umber is present 3 times
    // else some extra number is there 
    // now our task is to fnid that number 

    int ans=0;
    for(int i=0;i<32;i++){
        // check for set bit in array at ith position 
        int setBitCount=0;
        int setBit=1<<i;
        for(auto it:nums){
            if(it&setBit){
                setBitCount++;
            }
        }
        if(setBitCount%3!=0){
            ans|=setBit;
        }

    }
    return ans;
    
}
int main()
{
    return 0;
}