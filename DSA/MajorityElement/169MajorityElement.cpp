#include<iostream>
#include<vector>
using namespace std;

/* 
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
 */

int majorityElement(vector<int>& nums) {
    int count = 0;
    int element = 0, n = nums.size();
    for(int i = 0; i < n; i++){
        if(count == 0){
            element = nums[i];
            count ++;
        }
        else if(nums[i] == element){
            count ++;
        }
        else{
            count --;
        }
    }
    return element ;
    
}
int main()
{
    return 0;
}