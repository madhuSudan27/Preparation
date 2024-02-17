#include<iostream>
#include<vector>
using namespace std;

/* 


75. Sort Colors

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 */


void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;

    while(mid <= high){
        if(nums[mid] == 1){
            mid ++;
        }
        else if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low ++;
            mid ++;
        }
        else{
            swap(nums[high] , nums[mid]);
            high --;
        }
    }
    
    
}
int main()
{
    return 0;
}