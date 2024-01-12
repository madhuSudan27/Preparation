#include<iostream>
#include<vector>
using namespace std;
/* 

We are given an array containing n distinct numbers taken from the range 0 to n. Since the array has only n numbers out of the total n+1 numbers, find the missing number.

Example 1:

Input: [4, 0, 3, 1]
Output: 2
Example 2:

Input: [8, 3, 5, 2, 4, 6, 0, 1]
Output: 7
 */

int findMissingNumber(vector<int> &nums) {
    // TODO: Write your code here

    int n = nums.size();
     if(n == 1) return 1;

    for(int i = 0; i< n; i++){
      while(nums[i] < n && nums[i] != nums[nums[i]]){
        swap(nums[i] ,nums[nums[i]]);
      }
    } 

    for(int i = 0; i<n ; i++){
      if(nums[i] != i) return i;
    }
    return n;

    
  }

int main()
{
    return 0;
}