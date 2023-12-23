/* Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

 

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3 */


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // try with constant space 
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            int val=abs(nums[i]);
            if(nums[val-1]<0) return val;
            nums[val-1]*=-1;
        }
        return 0;
        
    }
};

int findDuplicate(vector<int>& nums) {
        
    int fast = nums[0];
    int slow = nums[0];
    
    do{
        fast = nums[nums[fast]];
        slow = nums[slow];
    }while(fast != slow);
    
    fast = nums[0];
    
    while(fast != slow)
    {
        fast = nums[fast];
        slow = nums[slow];
    }
    
        return slow;
}
        