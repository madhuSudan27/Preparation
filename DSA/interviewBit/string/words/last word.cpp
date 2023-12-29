#include<iostream>
#include<vector>
using namespace std;
/* 
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Please make sure you try to solve this problem without using library functions. Make sure you only traverse the string once.



Problem Constraints
1 <= |A| <= 106


Input Format
The first argument is a string A


Output Format
Return an integer denoting the length of the last word in the string.


Example Input
Input 1:
A = " hello world "
Input 2:
A = "InterviewBit"


Example Output
Output 1:
5
Output 2:
12


Example Explanation
Explanation 1:
"world" is the last word of size 5
Explanation 2:
"InterviewBit" is the last word of size 12
 */

int solution(const string A) {
    int n = A.size();
    if(n == 0) return 0;
    int ans = 0;
    int i = n-1;
    // at last it may contain space 
    while( A[i] == 32) i--;
    while( i >= 0 && A[i] != 32){
        ans ++;
        i --;
    }
    return ans;
}

int main()
{
    return 0;
}