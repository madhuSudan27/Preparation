#include<iostream>
#include<vector>
using namespace std;

/* 

Given an integer n, return the least number of perfect square numbers that sum to n.

A perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, 1, 4, 9, and 16 are perfect squares while 3 and 11 are not.

 

Example 1:

Input: n = 12
Output: 3
Explanation: 12 = 4 + 4 + 4.
Example 2:

Input: n = 13
Output: 2
Explanation: 13 = 4 + 9.
 

Constraints:

1 <= n <= 104
 */

 int solution(int num,vector<int>&dp){
        // if(check<=0) return 0;
        if(num<=0) return 0;
        if(dp[num]!=-1) return dp[num];
        int ans=100000;
        for(int i=1;i*i<=num;i++){
            int val=i*i;
            ans=min(ans,1+solution(num-val,dp));
        }
        return dp[num]= ans;
    }
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        // return solution(n,dp);
        dp[0]=0;
        for(int num=1;num<=n;num++){
            int ans=100000;
            for(int i=1;i*i<=num;i++){
                int val=i*i;
                ans=min(ans,1+dp[num-val]);
            }
            dp[num]= ans;
        }
        return dp[n];
    }

int main()
{
    return 0;
}