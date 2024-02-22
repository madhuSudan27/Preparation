#include<iostream>
#include<vector>
using namespace std;

/* 
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
 */


class Solution {
public:
    bool isPowerOfTwo(int n) {
       //  int ans=1;
       // for(int i=0;i<31;i++){
       //     if(ans==n){
       //         return 1;
       //     }
       //     if(ans<INT_MAX/2)
       //      ans*=2;
       // }
       //  return 0;
        
        // solve using bit manupulaton 
        // so base case would be 
        
        // if n has only one set bit then it would be 2^ powe 
        // if(n<=0) return 0;
        // return (n&(n-1))==0;

        // another approach 
        while(n%2==0) n/=2;
        return n==1;


    }
};