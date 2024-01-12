#include<iostream>
#include<vector>
using namespace std;

/* 
Problem Statement
We are given an unsorted array containing n numbers taken from the range 1 to n. The array has some numbers appearing twice, find all these duplicate numbers using constant space.

Example 1:

Input: [3, 4, 4, 5, 5]
Output: [4, 5]
Example 2:

Input: [5, 4, 7, 2, 3, 5, 3]
Output: [3, 5]
 */

vector<int> findNumbers(vector<int> &nums) {
    vector<int> duplicateNumbers;
    // TODO: Write your code here

    int  i = 0, n = nums.size();

    while(i < n){
        if(nums[i] != i+1){
        // then i have to make ans 
            if(nums[i] != nums[nums[i]-1]){
                swap(nums[i], nums[nums[i] -1]);
            }
            else{
                duplicateNumbers.push_back(nums[i]);
                i++;
            }
        }
        else{
            i++;
        }
    }
    return duplicateNumbers;
}
int main()
{
    return 0;
}