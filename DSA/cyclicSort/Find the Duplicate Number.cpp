#include<iostream>
#include<vector>
#include<algorithm>
#include <utility>
using namespace std;

// Find the Duplicate Number 

/* 
We are given an unsorted array containing n+1 numbers taken from the range 1 to n. The array has only one duplicate but it can be repeated multiple times. Find that duplicate number without using any extra space. You are, however, allowed to modify the input array.

Example 1:

Input: [1, 4, 4, 3, 2]
Output: 4
Example 2:

Input: [2, 1, 3, 3, 5, 4]
Output: 3
Example 3:

Input: [2, 4, 1, 4, 4]
Output: 4
 */
int findNumber(vector<int> &nums) {
    // TODO: Write your code here
    int n = nums.size();
    for(int i = 0; i < n; i++){
    int val = abs(nums[i]);
    if(nums[val - 1] < 0 ) return abs(nums[i]);
    nums[val - 1] = nums[val - 1] * -1; 
    }
    return -1;
}



int findNumber1(vector<int> &nums) {
    int i = 0;
    while (i < nums.size()) {
        if (nums[i] != i + 1) {
        if (nums[i] != nums[nums[i] - 1]) {
            swap(nums[i], nums[nums[i]- 1]);  // Swap elements to their correct positions
        } else {  // We have found the duplicate
            return nums[i];  // Return the duplicate number
        }
        } else {
        i++;  // Move to the next element
        }
    }

    return -1;  // No duplicate found
}
int main()
{
    return 0;
}