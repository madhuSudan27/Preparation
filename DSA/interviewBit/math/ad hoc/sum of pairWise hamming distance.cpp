#include<iostream>
#include<vector>
using namespace std;
/* 
Problem Description

Hamming distance between two non-negative integers is defined as the number of positions at which the corresponding bits are different.

Given an array A of N non-negative integers, find the sum of hamming distances of all pairs of integers in the array. Return the answer modulo 1000000007.

Problem Constraints
1 <= |A| <= 200000

1 <= A[i] <= 109

Input Format
First and only argument is array A.

Output Format
Return one integer, the answer to the problem.

Example Input
Input 1:

 A = [1]
Input 2:

 A = [2, 4, 6]

Example Output
Output 1:

 0
Output 2:

 8


Example Explanation
Explanation 1:

 No pairs are formed.
Explanation 2:

 We return, f(2, 2) + f(2, 4) + f(2, 6) + f(4, 2) + f(4, 4) + f(4, 6) + f(6, 2) + f(6, 4) + f(6, 6) = 8
 */

int hammingDistance(const vector<int> &A) {
    
    int n = A.size();
    if(n <= 1) return 0;
    
    // i can use bit manipulation to solve this 
    // goal is to count the set bit 
    // if we have k set bit 
    // then total number of hamming distance would be k * (n - k);
    int ans = 0 ;
    for(int i = 0 ; i < 32; i++){
        int mask = 1 << i;
        int countOne = 0;
        for(int j = 0; j < A.size(); j++){
            if(mask & A[j]){
                countOne ++;
            }
        }
        ans = ( ans + countOne * (A.size() - countOne)) % 1000000007;
    }
    return (ans * 2) % 1000000007;
}


int main()
{
    return 0;
}