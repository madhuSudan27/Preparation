#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

/* 
Given an unsorted array containing numbers and a number ‘k’, find the first ‘k’ missing positive numbers in the array.

Example 1:

Input: [3, -1, 4, 5, 5], k=3
Output: [1, 2, 6]
Explanation: The smallest missing positive numbers are 1, 2 and 6.
Example 2:

Input: [2, 3, 4], k=3
Output: [1, 5, 6]
Explanation: The smallest missing positive numbers are 1, 5 and 6.
Example 3:

Input: [-2, -3, 4], k=2
Output: [1, 2]
Explanation: The smallest missing positive numbers are 1 and 2.
 */

 vector<int> findNumbers(vector<int> &nums, int k) {
    vector<int>ans;
    // TODO: Write your code here
    unordered_map<int,int>mp;
    int i = 0, n = nums.size();

    while( i < n){
      // check and try to swap 
      if((nums[i] >0 && nums[i] <= n) && nums[i] != nums[nums[i] -1]){
        swap(nums[i], nums[nums[i] -1]);
      }
      else{
        i ++;
      }
    }

    for(int i = 0; i<n && ans.size() < k ; i++){
      if(nums[i] != i+1){
        ans.push_back(i+1);
        mp[nums[i]] ++;//extra number 
      }
    }
    // now we have all the missing number between 1 ans n 
    // so just need to check for number greater than n which is missing

    for(int i = 1; ans.size() < k; i++){
      int num= i + n;
      if(mp.find(num) == mp.end()){// if not an extra number then add to ans 
        ans.push_back(num);
      }
    }

    return ans;
  }

int main()
{
    return 0;
}