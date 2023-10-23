

#include<iostream>
using namespace std;

/* 

Given an integer array nums, return all the different possible non-decreasing subsequences of the given array with at least two elements. You may return the answer in any order.

 

Example 1:

Input: nums = [4,6,7,7]
Output: [[4,6],[4,6,7],[4,6,7,7],[4,7],[4,7,7],[6,7],[6,7,7],[7,7]]
Example 2:

Input: nums = [4,4,3,2,1]
Output: [[4,4]]
 
  */

class Solution {
public:
    void solution(vector<int>&arr, int index, int prev, vector<int>ds,vector<vector<int>>&ans){
        if(index>=arr.size()){
            // base case hit;
            if(ds.size()>=2){
                ans.push_back(ds);
            }
            return ;

        }
        if(prev==-1 || arr[prev]<=arr[index]){
            ds.push_back(arr[index]);
            solution(arr, index+1, index,ds, ans);
            ds.pop_back();
        }
        solution(arr, index+1, prev, ds, ans);

    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        solution(nums,0,-1,{},ans);
        set<vector<int>>s;
        for(auto it:ans) s.insert(it);
        ans.clear();
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;



    }
};