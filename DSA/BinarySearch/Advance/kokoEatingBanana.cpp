
#include<iostream>
#include<vector>
using namespace std;

/* 
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.

 

Example 1:

Input: piles = [3,6,7,11], h = 8
Output: 4
Example 2:

Input: piles = [30,11,23,4,20], h = 5
Output: 30
Example 3:

Input: piles = [30,11,23,4,20], h = 6
Output: 23
 

Constraints:

1 <= piles.length <= 104
piles.length <= h <= 109
1 <= piles[i] <= 109 */


bool canFinish(vector<int>&piles, int speed, int hour){
        long long count=0;
        for(auto it:piles){
            count=count+(it/speed);
            if(it%speed !=0) count++;
        }
        return count<=hour;
    }

    int solution(vector<int>&piles, int hour){
        //
        int maxCapacity=0;
        for(auto it:piles) maxCapacity=max(maxCapacity,it);

        int low=1,high=maxCapacity,ans=1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canFinish(piles,mid,hour)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();

        int ans=solution(piles,h);


        return ans;
    }