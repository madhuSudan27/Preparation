#include<iostream>
#include<vector>
using namespace std;

/* 
Q.
Given a 0-indexed integer array nums, find a 0-indexed integer array answer where:

answer.length == nums.length.
answer[i] = |leftSum[i] - rightSum[i]|.
Where:

leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
Return the array answer.

 

Example 1:

Input: nums = [10,4,8,3]
Output: [15,1,11,22]
Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].
Example 2:

Input: nums = [1]
Output: [0]
Explanation: The array leftSum is [0] and the array rightSum is [0].
The array answer is [|0 - 0|] = [0].
 

Constraints:

1 <= nums.length <= 1000
1 <= nums[i] <= 105
 */


// space complexity is high 
vector<int>solution(vector<int>& nums){
    int n = nums.size();
    if(n == 1) return {0};
    vector<int>left(n, 0);
    vector<int>right(n,0);
    vector<int>ans(n, 0);

    for(int i = 1; i < n;i++){
        left[i] = left[i - 1] + nums[i - 1];
    }
    for(int i = n - 2; i >= 0; i--){
        right[i] = right[i  + 1] + nums[i + 1];
    }

    for(int i = 0; i < n; i++){
        ans[i]= abs(left[i] - right[i]);
    }
    return ans;
}

int totalSum(vector<int>& nums){
    int sum =  0;
    for(auto it : nums){
        sum += it;
    }
    return sum;
}

vector<int> leftRightDifference(vector<int>& nums) {
    int n = nums.size();
    int sum = totalSum(nums) , currSum = 0;

    vector<int>ans(n, 0);
    // reduced space complexity solution 

    for(int i = 0; i< n; i ++){
        currSum += nums[i];

        int leftSum = currSum - nums[i];
        int rightSum = sum - currSum;
        ans[i] = abs(leftSum - rightSum);   
    }
    return ans;


}


int main()
{
    return 0;
}