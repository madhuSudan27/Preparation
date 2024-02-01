#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* 

You are given an integer array nums of size n and a positive integer k.

Divide the array into one or more arrays of size 3 satisfying the following conditions:

->  Each element of nums should be in exactly one array.  <--- this condition  is useless 
->  The difference between any two elements in one array is less than or equal to k.
Return a 2D array containing all the arrays. If it
 is impossible to satisfy the conditions, return an empty array. And if there are multiple answers, return any of them.

 

Example 1:

Input: nums = [1,3,4,8,7,9,3,5,1], k = 2
Output: [[1,1,3],[3,4,5],[7,8,9]]
Explanation: We can divide the array into the following arrays: [1,1,3], [3,4,5] and [7,8,9].
The difference between any two elements in each array is less than or equal to 2.
Note that the order of elements is not important.
Example 2:

Input: nums = [1,3,3,2,7,3], k = 3
Output: []
Explanation: It is not possible to divide the array satisfying all the conditions.
 
 */

vector<vector<int>> divideArray(vector<int>& nums, int k) {
    vector<vector<int>>ans;
    sort(nums.begin(), nums.end());
    int i = 0, n=nums.size();
    // int iteration = n/3;
    int prevElement = 0;

    for(int i = 0; i < n; i += 3){
        int maxThreshold = nums[i] + k;
        // if(prevElement == nums[i]) return {{}};
        vector<int>temp;

        for(int index = i; index < (i+3); index ++){
            if(maxThreshold - nums[index] < 0){
                return {};
            }
            else{
                temp.push_back(nums[index]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    return 0;
}