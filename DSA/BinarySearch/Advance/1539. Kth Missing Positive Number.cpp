#include<iostream>
#include<vector>
using  namespace std;


//  vec[high] + k - (vec[high] - (high+1))


/* 

Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.

 

Example 1:

Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
Example 2:

Input: arr = [1,2,3,4], k = 2
Output: 6
Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.
 */
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // WE CAN SOLVE USING MAP 
        /* unordered_map<int,int>mp;
        for(auto it:arr) mp[it]++;
        int num=1;
        while(k>0){
            if(mp.find(num)==mp.end()){
                k--;
            }
            num++;
        }
        return num-1; */

        // for(auto it:arr){
        //     if(it<=k) k++;
        // }
        // return k;
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]-(mid+1) <k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low+k;
    }
};