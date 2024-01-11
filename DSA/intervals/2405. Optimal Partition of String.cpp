#include<iostream>
#include<vector>
using namespace std;
/* 
Given a string s, partition the string into one or more substrings such that the characters in each substring are unique. That is, no letter appears in a single substring more than once.

Return the minimum number of substrings in such a partition.

Note that each character should belong to exactly one substring in a partition.

 

Example 1:

Input: s = "abacaba"
Output: 4
Explanation:
Two possible partitions are ("a","ba","cab","a") and ("ab","a","ca","ba").
It can be shown that 4 is the minimum number of substrings needed.
 */

int partitionString(string s) {
    int n = s.size();
    int result = 0;

    vector<int>fre(26);
    for(int i = 0 ;i< n; i++){
        // before marking i need to check 
        if(fre[s[i] - 'a'] >0){
            // we need to partition 
            result ++;
            // need to also make the fre array zero ;
            for(int i = 0; i < 26; i++){
                fre[i] = 0;
            }
        }
        fre[s[i] -'a'] ++;
    }
    // check if still we have more  element 
    for(int i = 0; i < 26; i++){
        if(fre[i] > 0){
            result ++;
            break;
        }
    }
    return result;
    
}
int main()
{
    return 0;
}