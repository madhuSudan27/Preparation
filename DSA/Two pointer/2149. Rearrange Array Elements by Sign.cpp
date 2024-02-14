#include<iostream>
#include<vector>
using namespace std;

/* 
You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should rearrange the elements of nums such that the modified array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.
 */


vector<int>solution(vector<int>nums){
        int n =  nums.size();
        vector<int>ans(n);
        int pos = 0, neg = 1;
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                ans[pos] = nums[i];
                pos += 2;
            }
            else{
                ans[neg] = nums[i];
                neg += 2;
            }
        }
        return ans;
    }
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int> pos, neg;
        // for(auto it: nums){
        //     if(it < 0){
        //         neg.push_back(it);
        //     }
        //     else{
        //         pos.push_back(it);
        //     }
        // }

        // // now we can form new ans 
        // int n = pos.size() , m = neg.size();
        // int i = 0, j = 0;
        // vector<int>ans;
        // while(i < n && j < m){
        //     ans.push_back(pos[i]);
        //     ans.push_back(neg[j]);
        //     i++;
        //     j++;
        // }
        // return ans;

        return solution(nums);
    
        
    }


int main()
{
    return 0;
}