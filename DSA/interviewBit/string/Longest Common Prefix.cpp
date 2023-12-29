#include<iostream>
#include<vector>
#include<string>
using namespace std;

/* 
Given the array of strings A, you need to find the longest string S which is the prefix of ALL the strings in the array.

Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1 and S2.

For Example: longest common prefix of "abcdefgh" and "abcefgh" is "abc".



Problem Constraints
0 <= sum of length of all strings <= 1000000



Input Format
The only argument given is an array of strings A.



Output Format
Return the longest common prefix of all strings in A.



Example Input
Input 1:

A = ["abcdefgh", "aefghijk", "abcefgh"]
Input 2:

A = ["abab", "ab", "abcd"];


Example Output
Output 1:

"a"
Output 2:

"ab"


Example Explanation
Explanation 1:

Longest common prefix of all the strings is "a".
Explanation 2:

Longest common prefix of all the strings is "ab".
 */



string longestCommonPrefix(vector<string> &A) {
    // find the length of smallest string 

    int len = INT_MAX;
    int n = A.size();
    string ans = "";
    for(auto it: A){
        int currLen = it.size();
        if(len > currLen){
            len = currLen;
        }
    }

    for( int i = 0 ;i<len ;i++){
        char c = A[0][i];
        bool check = 1;
        for( int j = 1; j < n; j++){
            if( c != A[j][i]){
                check = 0;
                break;
            }
        }
        if( !check) return ans;
        ans += c;
    }

    return ans;
}

int main()
{
    return 0;
}