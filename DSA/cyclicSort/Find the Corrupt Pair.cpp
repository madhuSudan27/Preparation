#include<iostream>
#include<vector>
using namespace std;

/* 
We are given an unsorted array containing ‘n’ numbers taken from the range 1 to ‘n’. The array originally contained all the numbers from 1 to ‘n’, but due to a data error, one of the numbers got duplicated which also resulted in one number going missing. Find both these numbers.

Example 1:

Input: [3, 1, 2, 5, 2]
Output: [2, 4]
Explanation: '2' is duplicated and '4' is missing.
Example 2:

Input: [3, 1, 2, 3, 6, 4]
Output: [3, 5]
Explanation: '3' is duplicated and '5' is missing

 */

vector<int> findNumbers(vector<int> &nums) {
    // TODO: Write your code here
    int i = 0, n = nums.size();

    while( i < n){
      // need to swap and check 
      if(nums[i] != nums[nums[i] -1]){
        swap(nums[i] , nums[nums[i] -1]);
      }
      else{
        i ++;
      }
    }


    for(int i = 0 ;i< n ; i++){
      if(nums[i] != i + 1){
        return {nums[i] , i + 1};
      }
    }

    return {-1, -1};
}

int main()
{
    return 0;
}